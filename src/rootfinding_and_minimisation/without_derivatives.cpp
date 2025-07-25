#include <cpp11.hpp>
#include <cpp11/declarations.hpp>
#include <boost/math/tools/roots.hpp>

extern "C" {
  SEXP bisect_(SEXP f_, SEXP a_, SEXP b_, SEXP digits_, SEXP max_iter_) {
    BEGIN_CPP11
    cpp11::function f(f_);
    double a = cpp11::as_cpp<double>(a_);
    double b = cpp11::as_cpp<double>(b_);
    double digits = cpp11::as_cpp<int>(digits_);
    std::uintmax_t max_iter = cpp11::as_cpp<std::uintmax_t>(max_iter_);

    auto func = [&f](double x) { return cpp11::as_cpp<double>(f(x)); };

    boost::math::tools::eps_tolerance<double> tol(digits);

    auto roots = boost::math::tools::bisect(func, a, b, tol, max_iter);
    using cpp11::literals::operator""_nm;
    cpp11::writable::list result;
    result.push_back({"lower"_nm = roots.first});
    result.push_back({"upper"_nm = roots.second});
    result.push_back({"iterations"_nm = max_iter});
    return cpp11::as_sexp(result);
    END_CPP11
  }

  SEXP bracket_and_solve_root_(SEXP f_, SEXP guess_, SEXP factor_, SEXP rising_, SEXP digits_, SEXP max_iter_) {
    BEGIN_CPP11
    cpp11::function f(f_);
    double guess = cpp11::as_cpp<double>(guess_);
    double factor = cpp11::as_cpp<double>(factor_);
    bool rising = cpp11::as_cpp<bool>(rising_);
    double digits = cpp11::as_cpp<int>(digits_);
    std::uintmax_t max_iter = cpp11::as_cpp<std::uintmax_t>(max_iter_);

    auto func = [&f](double x) { return cpp11::as_cpp<double>(f(x)); };

    boost::math::tools::eps_tolerance<double> tol(digits);

    auto roots = boost::math::tools::bracket_and_solve_root(func, guess, factor, rising, tol, max_iter);
    using cpp11::literals::operator""_nm;
    cpp11::writable::list result;
    result.push_back({"lower"_nm = roots.first});
    result.push_back({"upper"_nm = roots.second});
    result.push_back({"iterations"_nm = max_iter});
    return cpp11::as_sexp(result);
    END_CPP11
  }

  SEXP toms748_solve_(SEXP f_, SEXP a_, SEXP b_, SEXP digits_, SEXP max_iter_) {
    BEGIN_CPP11
    cpp11::function f(f_);
    double a = cpp11::as_cpp<double>(a_);
    double b = cpp11::as_cpp<double>(b_);
    double digits = cpp11::as_cpp<int>(digits_);
    std::uintmax_t max_iter = cpp11::as_cpp<std::uintmax_t>(max_iter_);

    auto func = [&f](double x) { return cpp11::as_cpp<double>(f(x)); };

    boost::math::tools::eps_tolerance<double> tol(digits);

    auto roots = boost::math::tools::toms748_solve(func, a, b, tol, max_iter);
    using cpp11::literals::operator""_nm;
    cpp11::writable::list result;
    result.push_back({"lower"_nm = roots.first});
    result.push_back({"upper"_nm = roots.second});
    result.push_back({"iterations"_nm = max_iter});
    return cpp11::as_sexp(result);
    END_CPP11
  }
}
