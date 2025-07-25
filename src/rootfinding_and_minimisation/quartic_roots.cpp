#include <cpp11.hpp>
#include <cpp11/declarations.hpp>
#include <boost/math/tools/quartic_roots.hpp>

extern "C" {
  SEXP quartic_roots_(SEXP a_, SEXP b_, SEXP c_, SEXP d_, SEXP e_) {
    BEGIN_CPP11
    double a = cpp11::as_cpp<double>(a_);
    double b = cpp11::as_cpp<double>(b_);
    double c = cpp11::as_cpp<double>(c_);
    double d = cpp11::as_cpp<double>(d_);
    double e = cpp11::as_cpp<double>(e_);

    std::array<double, 4> roots = boost::math::tools::quartic_roots(a, b, c, d, e);
    std::vector<double> result{roots[0], roots[1], roots[2], roots[3]};

    return cpp11::as_sexp(result);
    END_CPP11
  }
} // extern "C"
