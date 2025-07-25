#include <cpp11.hpp>
#include <cpp11/declarations.hpp>
#include <boost/math/special_functions/jacobi_elliptic.hpp>
#include "../boostmath/macros.hpp"

BINARY_BOOST_FUNCTION(jacobi_cd, double, double);
BINARY_BOOST_FUNCTION(jacobi_cn, double, double);
BINARY_BOOST_FUNCTION(jacobi_cs, double, double);
BINARY_BOOST_FUNCTION(jacobi_dc, double, double);
BINARY_BOOST_FUNCTION(jacobi_dn, double, double);
BINARY_BOOST_FUNCTION(jacobi_ds, double, double);
BINARY_BOOST_FUNCTION(jacobi_nc, double, double);
BINARY_BOOST_FUNCTION(jacobi_nd, double, double);
BINARY_BOOST_FUNCTION(jacobi_ns, double, double);
BINARY_BOOST_FUNCTION(jacobi_sc, double, double);
BINARY_BOOST_FUNCTION(jacobi_sd, double, double);
BINARY_BOOST_FUNCTION(jacobi_sn, double, double);

extern "C" {
  SEXP jacobi_elliptic_(SEXP k_, SEXP u_) {
    BEGIN_CPP11
    double k = cpp11::as_cpp<double>(k_);
    double u = cpp11::as_cpp<double>(u_);
    double pcn;
    double pdn;
    double sn = boost::math::jacobi_elliptic(k, u, &pcn, &pdn);

    using cpp11::literals::operator""_nm;
    cpp11::writable::list result;
    result.push_back({"sn"_nm = sn});
    result.push_back({"cn"_nm = pcn});
    result.push_back({"dn"_nm = pdn});

    return cpp11::as_sexp(result);
    END_CPP11
  }
}
