// This code conforms with the UFC specification version 2018.1.0
// and was automatically generated by FFC version 2019.1.0.
//
// This code was generated with the following parameters:
//

//  add_tabulate_tensor_timing:     False
//  convert_exceptions_to_warnings: False
//  cpp_optimize:                   True
//  cpp_optimize_flags:             '-O2'
//  epsilon:                        1e-14
//  error_control:                  False
//  external_include_dirs:          ['/home/saragazzoni/miniconda3/envs/myfenics/inclu
//                                  de', '/home/saragazzoni/miniconda3/envs/myfenics/i
//                                  nclude/eigen3', '/home/saragazzoni/miniconda3/envs
//                                  /myfenics/include']
//  external_includes:              ''
//  external_libraries:             ''
//  external_library_dirs:          ''
//  form_postfix:                   False
//  format:                         'ufc'
//  generate_dummy_tabulate_tensor: False
//  max_signature_length:           0
//  no-evaluate_basis_derivatives:  True
//  optimize:                       True
//  precision:                      None
//  quadrature_degree:              None
//  quadrature_rule:                None
//  representation:                 'auto'
//  split:                          False

#include "ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b.h"

// Based on https://gcc.gnu.org/wiki/Visibility
#if defined _WIN32 || defined __CYGWIN__
    #ifdef __GNUC__
        #define DLL_EXPORT __attribute__ ((dllexport))
    #else
        #define DLL_EXPORT __declspec(dllexport)
    #endif
#else
    #define DLL_EXPORT __attribute__ ((visibility ("default")))
#endif

ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_cell_integral_main_otherwise::ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_cell_integral_main_otherwise() : ufc::cell_integral()
{

}

ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_cell_integral_main_otherwise::~ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_cell_integral_main_otherwise()
{

}

const std::vector<bool> & ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_cell_integral_main_otherwise::enabled_coefficients() const
{
static const std::vector<bool> enabled({true});
return enabled;
}

void ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_cell_integral_main_otherwise::tabulate_tensor(double * A,
                                    const double * const * w,
                                    const double * coordinate_dofs,
                                    int cell_orientation) const
{
    // This function was generated using 'uflacs' representation
    // with the following integrals metadata:
    // 
    // num_cells:         None
    // optimize:          True
    // precision:         16
    // quadrature_degree: 1
    // quadrature_rule:   'default'
    // representation:    'uflacs'
    // 
    // and the following integral 0 metadata:
    // 
    // estimated_polynomial_degree: 1
    // optimize:                    True
    // precision:                   16
    // quadrature_degree:           1
    // quadrature_rule:             'default'
    // representation:              'uflacs'
    // Precomputed values of basis functions and precomputations
    // FE* dimensions: [entities][points][dofs]
    // PI* dimensions: [entities][dofs][dofs] or [entities][dofs]
    // PM* dimensions: [entities][dofs][dofs]
    alignas(32) static const double FE11_C0_D01_Q1[1][1][2] = { { { -1.0, 1.0 } } };
    // Unstructured piecewise computations
    const double w0_d1_c1 = w[0][3] * FE11_C0_D01_Q1[0][0][0] + w[0][5] * FE11_C0_D01_Q1[0][0][1];
    const double J_c0 = coordinate_dofs[0] * FE11_C0_D01_Q1[0][0][0] + coordinate_dofs[2] * FE11_C0_D01_Q1[0][0][1];
    const double J_c3 = coordinate_dofs[1] * FE11_C0_D01_Q1[0][0][0] + coordinate_dofs[5] * FE11_C0_D01_Q1[0][0][1];
    const double J_c1 = coordinate_dofs[0] * FE11_C0_D01_Q1[0][0][0] + coordinate_dofs[4] * FE11_C0_D01_Q1[0][0][1];
    const double J_c2 = coordinate_dofs[1] * FE11_C0_D01_Q1[0][0][0] + coordinate_dofs[3] * FE11_C0_D01_Q1[0][0][1];
    double w0_d0_c1 = 0.0;
    for (int ic = 0; ic < 2; ++ic)
        w0_d0_c1 += w[0][ic + 3] * FE11_C0_D01_Q1[0][0][ic];
    const double w0_d1_c0 = w[0][0] * FE11_C0_D01_Q1[0][0][0] + w[0][2] * FE11_C0_D01_Q1[0][0][1];
    double w0_d0_c0 = 0.0;
    for (int ic = 0; ic < 2; ++ic)
        w0_d0_c0 += w[0][ic] * FE11_C0_D01_Q1[0][0][ic];
    const double J_c0 = coordinate_dofs[0] * FE11_C0_D01_Q1[0][0][0] + coordinate_dofs[2] * FE11_C0_D01_Q1[0][0][1];
    const double J_c3 = coordinate_dofs[1] * FE11_C0_D01_Q1[0][0][0] + coordinate_dofs[5] * FE11_C0_D01_Q1[0][0][1];
    const double J_c1 = coordinate_dofs[0] * FE11_C0_D01_Q1[0][0][0] + coordinate_dofs[4] * FE11_C0_D01_Q1[0][0][1];
    const double J_c2 = coordinate_dofs[1] * FE11_C0_D01_Q1[0][0][0] + coordinate_dofs[3] * FE11_C0_D01_Q1[0][0][1];
    alignas(32) double sp[29];
    sp[0] = J_c0 * J_c3;
    sp[1] = J_c1 * J_c2;
    sp[2] = sp[0] + -1 * sp[1];
    sp[3] = J_c0 / sp[2];
    sp[4] = w0_d1_c1 * sp[3];
    sp[5] = -1 * J_c1 / sp[2];
    sp[6] = w0_d0_c1 * sp[5];
    sp[7] = sp[4] + sp[6];
    sp[8] = sp[7] + sp[7];
    sp[9] = w0_d1_c0 * sp[3];
    sp[10] = w0_d0_c0 * sp[5];
    sp[11] = sp[9] + sp[10];
    sp[12] = J_c3 / sp[2];
    sp[13] = w0_d0_c1 * sp[12];
    sp[14] = -1 * J_c2 / sp[2];
    sp[15] = w0_d1_c1 * sp[14];
    sp[16] = sp[13] + sp[15];
    sp[17] = sp[11] + sp[16];
    sp[18] = w0_d0_c0 * sp[12];
    sp[19] = w0_d1_c0 * sp[14];
    sp[20] = sp[18] + sp[19];
    sp[21] = sp[20] + sp[20];
    sp[22] = J_c0 * J_c3;
    sp[23] = J_c1 * J_c2;
    sp[24] = sp[22] + -1 * sp[23];
    sp[25] = std::abs(sp[24]);
    sp[26] = 0.5 * sp[8] * sp[25];
    sp[27] = 0.5 * sp[17] * sp[25];
    sp[28] = 0.5 * sp[21] * sp[25];
    A[0] = 0.1666666666666667 * sp[28];
    A[1] = 0.1666666666666667 * sp[28];
    A[2] = 0.1666666666666667 * sp[28];
    A[3] = 0.1666666666666667 * sp[27];
    A[4] = 0.1666666666666667 * sp[27];
    A[5] = 0.1666666666666667 * sp[27];
    A[6] = 0.1666666666666667 * sp[27];
    A[7] = 0.1666666666666667 * sp[27];
    A[8] = 0.1666666666666667 * sp[27];
    A[9] = 0.1666666666666667 * sp[26];
    A[10] = 0.1666666666666667 * sp[26];
    A[11] = 0.1666666666666667 * sp[26];
}

extern "C" DLL_EXPORT ufc::cell_integral * create_ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_cell_integral_main_otherwise()
{
  return new ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_cell_integral_main_otherwise();
}


ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main() : ufc::form()
{
    // Do nothing
}

ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::~ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main()
{
    // Do nothing
}

const char * ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::signature() const
{
    return "6a9e8012c7b423c1774b9ab639b07038abb9156db864d47f787271d3d5c34ba8ea63faa1c616f95634335152342656f96d329614e237799b7fd58000d2b64db6";
}

std::size_t ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::rank() const
{
    return 1;
}

std::size_t ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::num_coefficients() const
{
    return 1;
}

std::size_t ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::original_coefficient_position(std::size_t i) const
{
    if (i >= 1)
    {
        throw std::runtime_error("Invalid original coefficient index.");
    }
    static const std::vector<std::size_t> position = {0};
    return position[i];
}

ufc::finite_element * ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::create_coordinate_finite_element() const
{
    return create_ffc_element_280259d62d4a4ed61b3f07871bdccfa0dda1b34f_finite_element_main();
}

ufc::dofmap * ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::create_coordinate_dofmap() const
{
    return create_ffc_element_280259d62d4a4ed61b3f07871bdccfa0dda1b34f_dofmap_main();
}

ufc::coordinate_mapping * ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::create_coordinate_mapping() const
{
    return create_ffc_coordinate_mapping_09a8bf295c56f35a7c09675d5bf311f41fd6208b_coordinate_mapping_main();
}

ufc::finite_element * ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::create_finite_element(std::size_t i) const
{
    switch (i)
    {
    case 0:
        return create_ffc_element_2716241590012dd1a81956f5a93ee160d04f4884_finite_element_main();
    case 1:
        return create_ffc_element_280259d62d4a4ed61b3f07871bdccfa0dda1b34f_finite_element_main();
    default:
        return nullptr;
    }
}

ufc::dofmap * ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::create_dofmap(std::size_t i) const
{
    switch (i)
    {
    case 0:
        return create_ffc_element_2716241590012dd1a81956f5a93ee160d04f4884_dofmap_main();
    case 1:
        return create_ffc_element_280259d62d4a4ed61b3f07871bdccfa0dda1b34f_dofmap_main();
    default:
        return nullptr;
    }
}

std::size_t ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::max_cell_subdomain_id() const
{
    return 0;
}

std::size_t ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::max_exterior_facet_subdomain_id() const
{
    return 0;
}

std::size_t ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::max_interior_facet_subdomain_id() const
{
    return 0;
}

std::size_t ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::max_vertex_subdomain_id() const
{
    return 0;
}

std::size_t ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::max_custom_subdomain_id() const
{
    return 0;
}

std::size_t ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::max_cutcell_subdomain_id() const
{
    return 0;
}

std::size_t ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::max_interface_subdomain_id() const
{
    return 0;
}

std::size_t ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::max_overlap_subdomain_id() const
{
    return 0;
}

bool ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::has_cell_integrals() const
{
    return true;
}

bool ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::has_exterior_facet_integrals() const
{
    return false;
}

bool ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::has_interior_facet_integrals() const
{
    return false;
}

bool ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::has_vertex_integrals() const
{
    return false;
}

bool ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::has_custom_integrals() const
{
    return false;
}

bool ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::has_cutcell_integrals() const
{
    return false;
}

bool ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::has_interface_integrals() const
{
    return false;
}

bool ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::has_overlap_integrals() const
{
    return false;
}

ufc::cell_integral * ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::create_cell_integral(std::size_t subdomain_id) const
{
    return nullptr;
}

ufc::exterior_facet_integral * ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::create_exterior_facet_integral(std::size_t subdomain_id) const
{
    return nullptr;
}

ufc::interior_facet_integral * ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::create_interior_facet_integral(std::size_t subdomain_id) const
{
    return nullptr;
}

ufc::vertex_integral * ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::create_vertex_integral(std::size_t subdomain_id) const
{
    return nullptr;
}

ufc::custom_integral * ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::create_custom_integral(std::size_t subdomain_id) const
{
    return nullptr;
}

ufc::cutcell_integral * ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::create_cutcell_integral(std::size_t subdomain_id) const
{
    return nullptr;
}

ufc::interface_integral * ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::create_interface_integral(std::size_t subdomain_id) const
{
    return nullptr;
}

ufc::overlap_integral * ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::create_overlap_integral(std::size_t subdomain_id) const
{
    return nullptr;
}

ufc::cell_integral * ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::create_default_cell_integral() const
{
    return create_ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_cell_integral_main_otherwise();
}

ufc::exterior_facet_integral * ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::create_default_exterior_facet_integral() const
{
    return nullptr;
}

ufc::interior_facet_integral * ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::create_default_interior_facet_integral() const
{
    return nullptr;
}

ufc::vertex_integral * ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::create_default_vertex_integral() const
{
    return nullptr;
}

ufc::custom_integral * ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::create_default_custom_integral() const
{
    return nullptr;
}

ufc::cutcell_integral * ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::create_default_cutcell_integral() const
{
    return nullptr;
}

ufc::interface_integral * ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::create_default_interface_integral() const
{
    return nullptr;
}

ufc::overlap_integral * ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main::create_default_overlap_integral() const
{
    return nullptr;
}

extern "C" DLL_EXPORT ufc::form * create_ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main()
{
  return new ffc_form_7d9e6e0c8f0275a82931f0fa0e652d519702f88b_form_main();
}

