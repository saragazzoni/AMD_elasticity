import gmsh

# Initialize Gmsh
gmsh.initialize()
gmsh.option.setNumber("General.Terminal", 1)

# Define the parameters of the circle and the hole
radius_outer = 1.0
radius_inner = 0.1
num_segments = 20
lc = 0.05

# Define the points for the outer and inner circles
outer_point1 = gmsh.model.geo.addPoint(0, 0, 0, lc)
outer_point2 = gmsh.model.geo.addPoint(radius_outer, 0, 0, lc)
outer_point3 = gmsh.model.geo.addPoint(-radius_outer, 0, 0, lc)

inner_point1 = gmsh.model.geo.addPoint(0, 0, 0, lc)
inner_point2 = gmsh.model.geo.addPoint(radius_inner, 0, 0, lc)
inner_point3 = gmsh.model.geo.addPoint(-radius_inner, 0, 0, lc)

# Add the outer circle geometry
outer_circle1 = gmsh.model.geo.addCircleArc(outer_point2, outer_point1, outer_point3)
outer_circle2 = gmsh.model.geo.addCircleArc(outer_point3, outer_point1, outer_point2)

# Add the inner circle geometry (hole)
inner_circle1 = gmsh.model.geo.addCircleArc(inner_point2, inner_point1, inner_point3)
inner_circle2 = gmsh.model.geo.addCircleArc(inner_point3, inner_point1, inner_point2)

# Define the loop representing the outer circle
outer_loop = gmsh.model.geo.addCurveLoop([outer_circle1, outer_circle2])

# Define the loop representing the inner circle (hole)
inner_loop = gmsh.model.geo.addCurveLoop([inner_circle1, inner_circle2])

# # Define the plane surface between the outer and inner circles
# plane_surface = gmsh.model.geo.addPlaneSurface([outer_loop, -inner_loop])

radius_inner2 = 0.05
# Define the points for the additional inner circle
inner_point4 = gmsh.model.geo.addPoint(0.5, 0.5, 0, lc)
inner_point5 = gmsh.model.geo.addPoint(0.5+radius_inner2, 0.5, 0, lc)
inner_point6 = gmsh.model.geo.addPoint(0.5-radius_inner2, 0.5, 0, lc)

# Add the additional inner circle geometry (hole)
inner_circle3 = gmsh.model.geo.addCircleArc(inner_point5, inner_point4, inner_point6)
inner_circle4 = gmsh.model.geo.addCircleArc(inner_point6, inner_point4, inner_point5)

# Define the loop representing the additional inner circle (hole)
inner_loop2 = gmsh.model.geo.addCurveLoop([inner_circle3, inner_circle4])

# Define the plane surface between the outer circle and the inner circles
plane_surface = gmsh.model.geo.addPlaneSurface([outer_loop, -inner_loop, -inner_loop2])

# Define the refinement parameters
outer_bound_size = 0.2  # Characteristic length near the outer boundary
inner_bound_size = 0.05  # Characteristic length near the inner boundary

# Define the transfinite mesh using the size fields
# gmsh.model.mesh.field.setAsBackgroundMesh(field_outer)
gmsh.model.geo.synchronize()
gmsh.model.mesh.generate(2)

# Save the mesh to a file
gmsh.write("circle_with_hole_coarse_to_fine.msh")

gmsh.fltk.run()

# Finalize Gmsh
gmsh.finalize()
