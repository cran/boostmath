#include <cpp11.hpp>
#include <cpp11/declarations.hpp>
#include <boost/math/tools/minima.hpp>

extern "C" {
  SEXP brent_find_minima_(SEXP f_, SEXP a_, SEXP b_, SEXP digits_, SEXP max_iter_) {
    BEGIN_CPP11
    cpp11::function f(f_);
    double a = cpp11::as_cpp<double>(a_);
    double b = cpp11::as_cpp<double>(b_);
    double digits = cpp11::as_cpp<int>(digits_);
    std::uintmax_t max_iter = cpp11::as_cpp<std::uintmax_t>(max_iter_);

    auto func = [&f](double x) { return cpp11::as_cpp<double>(f(x)); };

    std::pair<double, double> result = boost::math::tools::brent_find_minima(func, a, b, digits, max_iter);
    using cpp11::literals::operator""_nm;
    cpp11::writable::list output;
    output.push_back({"minimum"_nm = result.first});
    output.push_back({"value"_nm = result.second});
    output.push_back({"iterations"_nm = max_iter});
    return cpp11::as_sexp(output);
    END_CPP11
  }
}
