#include <Rinternals.h>
#include <R_ext/Visibility.h>

extern "C" {
  // number_series.cpp
  SEXP bernoulli_b2n_(SEXP n_);
  SEXP max_bernoulli_b2n_();
  SEXP unchecked_bernoulli_b2n_(SEXP n_);
  SEXP bernoulli_b2n_range_(SEXP start_index_, SEXP number_of_bernoullis_b2n_);
  SEXP tangent_t2n_(SEXP n_);
  SEXP tangent_t2n_range_(SEXP start_index_, SEXP number_of_tangent_t2n_);
  SEXP prime_(SEXP n_);
  SEXP max_prime_();
  SEXP fibonacci_(SEXP n_);
  SEXP unchecked_fibonacci_(SEXP n_);

  // gamma_functions.cpp
  SEXP tgamma_(SEXP z_);
  SEXP tgamma1pm1_(SEXP dz_);
  SEXP lgamma_(SEXP z_);
  SEXP digamma_(SEXP z_);
  SEXP trigamma_(SEXP z_);
  SEXP polygamma_(SEXP n_, SEXP z_);
  SEXP tgamma_ratio_(SEXP a_, SEXP b_);
  SEXP tgamma_delta_ratio_(SEXP a_, SEXP delta_);
  SEXP gamma_p_(SEXP a_, SEXP z_);
  SEXP gamma_q_(SEXP a_, SEXP z_);
  SEXP tgamma_lower_(SEXP a_, SEXP z_);
  SEXP tgamma_upper_(SEXP a_, SEXP z_);
  SEXP gamma_q_inv_(SEXP a_, SEXP q_);
  SEXP gamma_p_inv_(SEXP a_, SEXP p_);
  SEXP gamma_q_inva_(SEXP x_, SEXP q_);
  SEXP gamma_p_inva_(SEXP x_, SEXP p_);
  SEXP gamma_p_derivative_(SEXP a_, SEXP x_);

  // factorials_and_binomial_coefficients.cpp
  SEXP factorial_(SEXP i_);
  SEXP unchecked_factorial_(SEXP i_);
  SEXP max_factorial_();
  SEXP double_factorial_(SEXP i_);
  SEXP rising_factorial_(SEXP x_, SEXP i_);
  SEXP falling_factorial_(SEXP x_, SEXP i_);
  SEXP binomial_coefficient_(SEXP n_, SEXP k_);

  // beta_functions.cpp
  SEXP beta_(SEXP a_, SEXP b_);
  SEXP ibeta_(SEXP a_, SEXP b_, SEXP x_);
  SEXP ibetac_(SEXP a_, SEXP b_, SEXP x_);
  SEXP beta_incomplete_(SEXP a_, SEXP b_, SEXP x_);
  SEXP betac_(SEXP a_, SEXP b_, SEXP x_);
  SEXP ibeta_inv_(SEXP a_, SEXP b_, SEXP p_);
  SEXP ibetac_inv_(SEXP a_, SEXP b_, SEXP q_);
  SEXP ibeta_inva_(SEXP b_, SEXP x_, SEXP p_);
  SEXP ibetac_inva_(SEXP b_, SEXP x_, SEXP q_);
  SEXP ibeta_invb_(SEXP a_, SEXP x_, SEXP p_);
  SEXP ibetac_invb_(SEXP a_, SEXP x_, SEXP q_);
  SEXP ibeta_derivative_(SEXP a_, SEXP b_, SEXP x_);

  // error_functions.cpp
  SEXP erf_(SEXP x_);
  SEXP erfc_(SEXP x_);
  SEXP erf_inv_(SEXP p_);
  SEXP erfc_inv_(SEXP p_);

  // polynomials.cpp
  SEXP legendre_p_(SEXP n_, SEXP x_);
  SEXP legendre_p_prime_(SEXP n_, SEXP x_);
  SEXP legendre_p_zeros_(SEXP l_);
  SEXP legendre_p_m_(SEXP n_, SEXP m_, SEXP x_);
  SEXP legendre_q_(SEXP n_, SEXP x_);
  SEXP legendre_next_(SEXP l_, SEXP x_, SEXP Pl_, SEXP Plm1_);
  SEXP legendre_next_m_(SEXP l_, SEXP m_, SEXP x_, SEXP Pl_, SEXP Plm1_);
  SEXP laguerre_(SEXP n_, SEXP x_);
  SEXP laguerre_m_(SEXP n_, SEXP m_, SEXP x_);
  SEXP laguerre_next_(SEXP n_, SEXP x_, SEXP Ln_, SEXP Lnm1_);
  SEXP laguerre_next_m_(SEXP n_, SEXP m_, SEXP x_, SEXP Ln_, SEXP Lnm1_);
  SEXP hermite_(SEXP n_, SEXP x_);
  SEXP hermite_next_(SEXP n_, SEXP x_, SEXP Hn_, SEXP Hnm1_);
  SEXP chebyshev_next_(SEXP x_, SEXP Tn_, SEXP Tn_1_);
  SEXP chebyshev_t_(SEXP n_, SEXP x_);
  SEXP chebyshev_u_(SEXP n_, SEXP x_);
  SEXP chebyshev_t_prime_(SEXP n_, SEXP x_);
  SEXP chebyshev_clenshaw_recurrence_(SEXP c_, SEXP x_);
  SEXP chebyshev_clenshaw_recurrence_ab_(SEXP c_, SEXP a_, SEXP b_, SEXP x_);
  SEXP spherical_harmonic_(SEXP n_, SEXP m_, SEXP theta_, SEXP phi_);
  SEXP spherical_harmonic_r_(SEXP n_, SEXP m_, SEXP theta_, SEXP phi_);
  SEXP spherical_harmonic_i_(SEXP n_, SEXP m_, SEXP theta_, SEXP phi_);
  SEXP gegenbauer_(SEXP n_, SEXP lambda_, SEXP x_);
  SEXP gegenbauer_prime_(SEXP n_, SEXP lambda_, SEXP x_);
  SEXP gegenbauer_derivative_(SEXP n_, SEXP lambda_, SEXP x_, SEXP k_);
  SEXP jacobi_(SEXP n_, SEXP alpha_, SEXP beta_, SEXP x_);
  SEXP jacobi_derivative_(SEXP n_, SEXP alpha_, SEXP beta_, SEXP x_, SEXP k_) ;
  SEXP jacobi_prime_(SEXP n_, SEXP alpha_, SEXP beta_, SEXP x_);
  SEXP jacobi_double_prime_(SEXP n_, SEXP alpha_, SEXP beta_, SEXP x_);

  // bessel_functions.cpp
  SEXP cyl_bessel_j_(SEXP v_, SEXP x_);
  SEXP cyl_neumann_(SEXP v_ , SEXP x_);
  SEXP cyl_bessel_j_zero_(SEXP v_, SEXP m_);
  SEXP cyl_neumann_zero_(SEXP v_, SEXP m_);
  SEXP cyl_bessel_j_zero_multiple_(SEXP v_, SEXP start_index_, SEXP number_of_zeros_);
  SEXP cyl_neumann_zero_multiple_(SEXP v_, SEXP start_index_, SEXP number_of_zeros_);
  SEXP cyl_bessel_i_(SEXP v_, SEXP x_);
  SEXP cyl_bessel_k_(SEXP v_, SEXP x_);
  SEXP sph_bessel_(SEXP v_, SEXP x_);
  SEXP sph_neumann_(SEXP v_, SEXP x_);
  SEXP cyl_bessel_j_prime_(SEXP v_, SEXP x_);
  SEXP cyl_neumann_prime_(SEXP v_, SEXP x_);
  SEXP cyl_bessel_i_prime_(SEXP v_, SEXP x_);
  SEXP cyl_bessel_k_prime_(SEXP v_, SEXP x_);
  SEXP sph_bessel_prime_(SEXP v_, SEXP x_);
  SEXP sph_neumann_prime_(SEXP v_, SEXP x_);

  // airy_functions.cpp
  SEXP airy_ai_(SEXP x_);
  SEXP airy_bi_(SEXP x_);
  SEXP airy_ai_prime_(SEXP x_);
  SEXP airy_bi_prime_(SEXP x_);
  SEXP airy_ai_zero_(SEXP m_);
  SEXP airy_bi_zero_(SEXP m_);
  SEXP airy_ai_zero_multiple_(SEXP start_index_, SEXP number_of_zeros_);
  SEXP airy_bi_zero_multiple_(SEXP start_index_, SEXP number_of_zeros_);

  //  elliptic_integrals.cpp
  SEXP ellint_rf_(SEXP x_, SEXP y_, SEXP z_);
  SEXP ellint_rd_(SEXP x_, SEXP y_, SEXP z_);
  SEXP ellint_rj_(SEXP x_, SEXP y_, SEXP z_, SEXP p_);
  SEXP ellint_rc_(SEXP x_, SEXP y_);
  SEXP ellint_rg_(SEXP x_, SEXP y_, SEXP z_);
  SEXP ellint_1_incomplete_(SEXP k_, SEXP phi_);
  SEXP ellint_1_(SEXP k_);
  SEXP ellint_2_incomplete_(SEXP k_, SEXP phi_);
  SEXP ellint_2_(SEXP k_);
  SEXP ellint_3_incomplete_(SEXP k_, SEXP n_, SEXP phi_);
  SEXP ellint_3_(SEXP k_, SEXP n_);
  SEXP ellint_d_incomplete_(SEXP k_, SEXP phi_);
  SEXP ellint_d_(SEXP k_);
  SEXP jacobi_zeta_(SEXP k_, SEXP phi_);
  SEXP heuman_lambda_(SEXP k_, SEXP phi_);

  // jacobi_elliptic_functions.cpp
  SEXP jacobi_elliptic_(SEXP k_, SEXP u_);
  SEXP jacobi_cd_(SEXP k_, SEXP u_);
  SEXP jacobi_cn_(SEXP k_, SEXP u_);
  SEXP jacobi_cs_(SEXP k_, SEXP u_);
  SEXP jacobi_dc_(SEXP k_, SEXP u_);
  SEXP jacobi_dn_(SEXP k_, SEXP u_);
  SEXP jacobi_ds_(SEXP k_, SEXP u_);
  SEXP jacobi_nc_(SEXP k_, SEXP u_);
  SEXP jacobi_nd_(SEXP k_, SEXP u_);
  SEXP jacobi_ns_(SEXP k_, SEXP u_);
  SEXP jacobi_sc_(SEXP k_, SEXP u_);
  SEXP jacobi_sd_(SEXP k_, SEXP u_);
  SEXP jacobi_sn_(SEXP k_, SEXP u_);

  // jacobi_theta_functions.cpp
  SEXP jacobi_theta1_(SEXP x_, SEXP q_);
  SEXP jacobi_theta1tau_(SEXP x_, SEXP tau);
  SEXP jacobi_theta2_(SEXP x_, SEXP q_);
  SEXP jacobi_theta2tau_(SEXP x_, SEXP tau_);
  SEXP jacobi_theta3_(SEXP x_, SEXP q_);
  SEXP jacobi_theta3tau_(SEXP x_, SEXP tau_);
  SEXP jacobi_theta3m1_(SEXP x_, SEXP q_);
  SEXP jacobi_theta3m1tau_(SEXP x_, SEXP tau_);
  SEXP jacobi_theta4_(SEXP x_, SEXP q_);
  SEXP jacobi_theta4tau_(SEXP x_, SEXP tau_);
  SEXP jacobi_theta4m1_(SEXP x_, SEXP q_);
  SEXP jacobi_theta4m1tau_(SEXP x_, SEXP tau_);

  // lambert_w_function.cpp
  SEXP lambert_w0_(SEXP z_);
  SEXP lambert_wm1_(SEXP z_);
  SEXP lambert_w0_prime_(SEXP z_);
  SEXP lambert_wm1_prime_(SEXP z_);

  // riemann_zeta_function.cpp
  SEXP zeta_(SEXP z_);

  // exponential_integrals.cpp
  SEXP expint_en_(SEXP n_, SEXP z_);
  SEXP expint_ei_(SEXP z_);

  // hankel_functions.cpp
  SEXP cyl_hankel_1_(SEXP v_, SEXP x_);
  SEXP cyl_hankel_2_(SEXP v_, SEXP x_);
  SEXP sph_hankel_1_(SEXP v_, SEXP x_);
  SEXP sph_hankel_2_(SEXP v_, SEXP x_);

  // hypergeometric_functions.cpp
  SEXP hypergeometric_1F0_(SEXP a_, SEXP z_);
  SEXP hypergeometric_0F1_(SEXP b_, SEXP z_);
  SEXP hypergeometric_2F0_(SEXP a1_, SEXP a2_, SEXP z_);
  SEXP hypergeometric_1F1_(SEXP a_, SEXP b_, SEXP z_);
  SEXP hypergeometric_1F1_regularized_(SEXP a_, SEXP b_, SEXP z_);
  SEXP log_hypergeometric_1F1_(SEXP a_, SEXP b_, SEXP z_);
  SEXP hypergeometric_pFq_(SEXP a_, SEXP b_, SEXP z_);

  // basic_functions.cpp
  SEXP sin_pi_(SEXP x_);
  SEXP cos_pi_(SEXP x_);
  SEXP log1p_(SEXP x_);
  SEXP expm1_(SEXP x_);
  SEXP cbrt_(SEXP x_);
  SEXP sqrt1pm1_(SEXP x_);
  SEXP powm1_(SEXP x_, SEXP y_);
  SEXP hypot_(SEXP x_, SEXP y_);
  SEXP rsqrt_(SEXP x_);

  // sinus_cardinal_hyperbolic_functions.cpp
  SEXP sinc_pi_(SEXP x_);
  SEXP sinhc_pi_(SEXP x_);

  // inverse_hyperbolic_functions.cpp
  SEXP asinh_(SEXP x_);
  SEXP acosh_(SEXP x_);
  SEXP atanh_(SEXP x_);

  // owens_t_function.cpp
  SEXP owens_t_(SEXP h_, SEXP a_);

  // quadrature_and_differentiation/double_exponential.cpp
  SEXP tanh_sinh_(SEXP f_, SEXP a_, SEXP b_, SEXP tol_, SEXP max_refinements_);
  SEXP sinh_sinh_(SEXP f_, SEXP tol_, SEXP max_refinements_);
  SEXP exp_sinh_(SEXP f_, SEXP a_, SEXP b_, SEXP tol_, SEXP max_refinements_);

  // quadrature_and_differentiation/fourier_integrals.cpp
  SEXP ooura_fourier_sin_(SEXP f_, SEXP omega_, SEXP relative_error_tolerance_, SEXP levels_);
  SEXP ooura_fourier_cos_(SEXP f_, SEXP omega_, SEXP relative_error_tolerance_, SEXP levels_);

  // quadrature_and_differentiation/trapezoidal.cpp
  SEXP trapezoidal_(SEXP f_, SEXP a_, SEXP b_, SEXP tol_, SEXP max_refinements_);

  // quadrature_and_differentiation/gauss_legendre.cpp
  SEXP gauss_legendre_(SEXP f_, SEXP a_, SEXP b_, SEXP points_);

  // quadrature_and_differentiation/gauss_kronrod.cpp
  SEXP gauss_kronrod_(SEXP f_, SEXP a_, SEXP b_, SEXP points_, SEXP max_depth_, SEXP tol_);

  // quadrature_and_differentiation/numerical_differentiation.cpp
  SEXP finite_difference_derivative_(SEXP f_, SEXP x_, SEXP order_);
  SEXP complex_step_derivative_(SEXP f_, SEXP x_);

  // statistical_distributions/arcsine.cpp
  SEXP arcsine_pdf_(SEXP x_, SEXP x_min_, SEXP x_max_);
  SEXP arcsine_logpdf_(SEXP x_, SEXP x_min_, SEXP x_max_);
  SEXP arcsine_cdf_(SEXP x_, SEXP x_min_, SEXP x_max_);
  SEXP arcsine_logcdf_(SEXP x_, SEXP x_min_, SEXP x_max_);
  SEXP arcsine_quantile_(SEXP p_, SEXP x_min_, SEXP x_max_);

  // statistical_distributions/bernoulli.cpp
  SEXP bernoulli_pdf_(SEXP x_, SEXP p_);
  SEXP bernoulli_logpdf_(SEXP x_, SEXP p_);
  SEXP bernoulli_cdf_(SEXP x_, SEXP p_);
  SEXP bernoulli_logcdf_(SEXP x_, SEXP p_);
  SEXP bernoulli_quantile_(SEXP p_, SEXP q_);

  // statistical_distributions/beta.cpp
  SEXP beta_pdf_(SEXP x_, SEXP alpha_, SEXP beta_);
  SEXP beta_logpdf_(SEXP x_, SEXP alpha_, SEXP beta_);
  SEXP beta_cdf_(SEXP x_, SEXP alpha_, SEXP beta_);
  SEXP beta_logcdf_(SEXP x_, SEXP alpha_, SEXP beta_);
  SEXP beta_quantile_(SEXP p_, SEXP alpha_, SEXP beta_);

  // statistical_distributions/binomial.cpp
  SEXP binomial_pdf_(SEXP k_, SEXP n_, SEXP prob_);
  SEXP binomial_logpdf_(SEXP k_, SEXP n_, SEXP prob_);
  SEXP binomial_cdf_(SEXP k_, SEXP n_, SEXP prob_);
  SEXP binomial_logcdf_(SEXP k_, SEXP n_, SEXP prob_);
  SEXP binomial_quantile_(SEXP p_, SEXP n_, SEXP prob_);

  // statistical_distributions/cauchy.cpp
  SEXP cauchy_pdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP cauchy_logpdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP cauchy_cdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP cauchy_logcdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP cauchy_quantile_(SEXP p_, SEXP location_, SEXP scale_);

  // statistical_distributions/chi_squared.cpp
  SEXP chi_squared_pdf_(SEXP x_, SEXP df_);
  SEXP chi_squared_logpdf_(SEXP x_, SEXP df_);
  SEXP chi_squared_cdf_(SEXP x_, SEXP df_);
  SEXP chi_squared_logcdf_(SEXP x_, SEXP df_);
  SEXP chi_squared_quantile_(SEXP p_, SEXP df_);

  // statistical_distributions/exponential.cpp
  SEXP exponential_pdf_(SEXP x_, SEXP rate_);
  SEXP exponential_logpdf_(SEXP x_, SEXP rate_);
  SEXP exponential_cdf_(SEXP x_, SEXP rate_);
  SEXP exponential_logcdf_(SEXP x_, SEXP rate_);
  SEXP exponential_quantile_(SEXP p_, SEXP rate_);

  // statistical_distributions/extreme_value.cpp
  SEXP extreme_value_pdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP extreme_value_logpdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP extreme_value_cdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP extreme_value_logcdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP extreme_value_quantile_(SEXP p_, SEXP location_, SEXP scale_);

  // statistical_distributions/fisher_f.cpp
  SEXP fisher_f_pdf_(SEXP x_, SEXP df1_, SEXP df2_);
  SEXP fisher_f_logpdf_(SEXP x_, SEXP df1_, SEXP df2_);
  SEXP fisher_f_cdf_(SEXP x_, SEXP df1_, SEXP df2_);
  SEXP fisher_f_logcdf_(SEXP x_, SEXP df1_, SEXP df2_);
  SEXP fisher_f_quantile_(SEXP p_, SEXP df1_, SEXP df2_);

  // statistical_distributions/gamma.cpp
  SEXP gamma_pdf_(SEXP x_, SEXP shape_, SEXP scale_);
  SEXP gamma_logpdf_(SEXP x_, SEXP shape_, SEXP scale_);
  SEXP gamma_cdf_(SEXP x_, SEXP shape_, SEXP scale_);
  SEXP gamma_logcdf_(SEXP x_, SEXP shape_, SEXP scale_);
  SEXP gamma_quantile_(SEXP p_, SEXP shape_, SEXP scale_);

  // statistical_distributions/geometric.cpp
  SEXP geometric_pdf_(SEXP x_, SEXP prob_);
  SEXP geometric_logpdf_(SEXP x_, SEXP prob_);
  SEXP geometric_cdf_(SEXP x_, SEXP prob_);
  SEXP geometric_logcdf_(SEXP x_, SEXP prob_);
  SEXP geometric_quantile_(SEXP p_, SEXP prob_);

  // statistical_distributions/holtsmark.cpp
  SEXP holtsmark_pdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP holtsmark_logpdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP holtsmark_cdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP holtsmark_logcdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP holtsmark_quantile_(SEXP p_, SEXP location_, SEXP scale_);

  // statistical_distributions/hyperexponential.cpp
  SEXP hyperexponential_pdf_(SEXP x_, SEXP probabilities_, SEXP rates_);
  SEXP hyperexponential_logpdf_(SEXP x_, SEXP probabilities_, SEXP rates_);
  SEXP hyperexponential_cdf_(SEXP x_, SEXP probabilities_, SEXP rates_);
  SEXP hyperexponential_logcdf_(SEXP x_, SEXP probabilities_, SEXP rates_);
  SEXP hyperexponential_quantile_(SEXP p_, SEXP probabilities_, SEXP rates_);

  // statistical_distributions/hypergeometric.cpp
  SEXP hypergeometric_pdf_(SEXP x_, SEXP r_, SEXP n_, SEXP N_);
  SEXP hypergeometric_logpdf_(SEXP x_, SEXP r_, SEXP n_, SEXP N_);
  SEXP hypergeometric_cdf_(SEXP x_, SEXP r_, SEXP n_, SEXP N_);
  SEXP hypergeometric_logcdf_(SEXP x_, SEXP r_, SEXP n_, SEXP N_);
  SEXP hypergeometric_quantile_(SEXP p_, SEXP r_, SEXP n_, SEXP N_);

  // statistical_distributions/inverse_chi_squared.cpp
  SEXP inverse_chi_squared_pdf_(SEXP x_, SEXP df_, SEXP scale_);
  SEXP inverse_chi_squared_logpdf_(SEXP x_, SEXP df_, SEXP scale_);
  SEXP inverse_chi_squared_cdf_(SEXP x_, SEXP df_, SEXP scale_);
  SEXP inverse_chi_squared_logcdf_(SEXP x_, SEXP df_, SEXP scale_);
  SEXP inverse_chi_squared_quantile_(SEXP p_, SEXP df_, SEXP scale_);

  // statistical_distributions/inverse_gamma.cpp
  SEXP inverse_gamma_pdf_(SEXP x_, SEXP shape_, SEXP scale_);
  SEXP inverse_gamma_logpdf_(SEXP x_, SEXP shape_, SEXP scale_);
  SEXP inverse_gamma_cdf_(SEXP x_, SEXP shape_, SEXP scale_);
  SEXP inverse_gamma_logcdf_(SEXP x_, SEXP shape_, SEXP scale_);
  SEXP inverse_gamma_quantile_(SEXP p_, SEXP shape_, SEXP scale_);

  // statistical_distributions/inverse_gaussian.cpp
  SEXP inverse_gaussian_pdf_(SEXP x_, SEXP mu_, SEXP lambda_);
  SEXP inverse_gaussian_logpdf_(SEXP x_, SEXP mu_, SEXP lambda_);
  SEXP inverse_gaussian_cdf_(SEXP x_, SEXP mu_, SEXP lambda_);
  SEXP inverse_gaussian_logcdf_(SEXP x_, SEXP mu_, SEXP lambda_);
  SEXP inverse_gaussian_quantile_(SEXP p_, SEXP mu_, SEXP lambda_);

  // statistical_distributions/kolmogorov_smirnov.cpp
  SEXP kolmogorov_smirnov_pdf_(SEXP x_, SEXP n_);
  SEXP kolmogorov_smirnov_logpdf_(SEXP x_, SEXP n_);
  SEXP kolmogorov_smirnov_cdf_(SEXP x_, SEXP n_);
  SEXP kolmogorov_smirnov_logcdf_(SEXP x_, SEXP n_);
  SEXP kolmogorov_smirnov_quantile_(SEXP p_, SEXP n_);

  // statistical_distributions/landau.cpp
  SEXP landau_pdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP landau_logpdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP landau_cdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP landau_logcdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP landau_quantile_(SEXP p_, SEXP location_, SEXP scale_);

  // statistical_distributions/laplace.cpp
  SEXP laplace_pdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP laplace_logpdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP laplace_cdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP laplace_logcdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP laplace_quantile_(SEXP p_, SEXP location_, SEXP scale_);

  // statistical_distributions/logistic.cpp
  SEXP logistic_pdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP logistic_logpdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP logistic_cdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP logistic_logcdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP logistic_quantile_(SEXP p_, SEXP location_, SEXP scale_);

  // statistical_distributions/lognormal.cpp
  SEXP lognormal_pdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP lognormal_logpdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP lognormal_cdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP lognormal_logcdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP lognormal_quantile_(SEXP p_, SEXP location_, SEXP scale_);

  // statistical_distributions/mapairy.cpp
  SEXP mapairy_pdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP mapairy_logpdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP mapairy_cdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP mapairy_logcdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP mapairy_quantile_(SEXP p_, SEXP location_, SEXP scale_);

  // statistical_distributions/negative_binomial.cpp
  SEXP negative_binomial_pdf_(SEXP x_, SEXP successes_, SEXP success_fraction_);
  SEXP negative_binomial_logpdf_(SEXP x_, SEXP successes_, SEXP success_fraction_);
  SEXP negative_binomial_cdf_(SEXP x_, SEXP successes_, SEXP success_fraction_);
  SEXP negative_binomial_logcdf_(SEXP x_, SEXP successes_, SEXP success_fraction_);
  SEXP negative_binomial_quantile_(SEXP p_, SEXP successes_, SEXP success_fraction_);

  // statistical_distributions/non_central_beta.cpp
  SEXP non_central_beta_pdf_(SEXP x_, SEXP alpha_, SEXP beta_, SEXP lambda_);
  SEXP non_central_beta_logpdf_(SEXP x_, SEXP alpha_, SEXP beta_, SEXP lambda_);
  SEXP non_central_beta_cdf_(SEXP x_, SEXP alpha_, SEXP beta_, SEXP lambda_);
  SEXP non_central_beta_logcdf_(SEXP x_, SEXP alpha_, SEXP beta_, SEXP lambda_);
  SEXP non_central_beta_quantile_(SEXP p_, SEXP alpha_, SEXP beta_, SEXP lambda_);

  // statistical_distributions/non_central_chi_squared.cpp
  SEXP non_central_chi_squared_pdf_(SEXP x_, SEXP df_, SEXP lambda_);
  SEXP non_central_chi_squared_logpdf_(SEXP x_, SEXP df_, SEXP lambda_);
  SEXP non_central_chi_squared_cdf_(SEXP x_, SEXP df_, SEXP lambda_);
  SEXP non_central_chi_squared_logcdf_(SEXP x_, SEXP df_, SEXP lambda_);
  SEXP non_central_chi_squared_quantile_(SEXP p_, SEXP df_, SEXP lambda_);

  // statistical_distributions/non_central_f.cpp
  SEXP non_central_f_pdf_(SEXP x_, SEXP df1_, SEXP df2_, SEXP lambda_);
  SEXP non_central_f_logpdf_(SEXP x_, SEXP df1_, SEXP df2_, SEXP lambda_);
  SEXP non_central_f_cdf_(SEXP x_, SEXP df1_, SEXP df2_, SEXP lambda_);
  SEXP non_central_f_logcdf_(SEXP x_, SEXP df1_, SEXP df2_, SEXP lambda_);
  SEXP non_central_f_quantile_(SEXP p_, SEXP df1_, SEXP df2_, SEXP lambda_);

  // statistical_distributions/non_central_t.cpp
  SEXP non_central_t_pdf_(SEXP x_, SEXP df_, SEXP delta_);
  SEXP non_central_t_logpdf_(SEXP x_, SEXP df_, SEXP delta_);
  SEXP non_central_t_cdf_(SEXP x_, SEXP df_, SEXP delta_);
  SEXP non_central_t_logcdf_(SEXP x_, SEXP df_, SEXP delta_);
  SEXP non_central_t_quantile_(SEXP p_, SEXP df_, SEXP delta_);

  // statistical_distributions/normal.cpp
  SEXP normal_pdf_(SEXP x_, SEXP mean_, SEXP sd_);
  SEXP normal_logpdf_(SEXP x_, SEXP mean_, SEXP sd_);
  SEXP normal_cdf_(SEXP x_, SEXP mean_, SEXP sd_);
  SEXP normal_logcdf_(SEXP x_, SEXP mean_, SEXP sd_);
  SEXP normal_quantile_(SEXP p_, SEXP mean_, SEXP sd_);

  // statistical_distributions/pareto.cpp
  SEXP pareto_pdf_(SEXP x_, SEXP shape_, SEXP scale_);
  SEXP pareto_logpdf_(SEXP x_, SEXP shape_, SEXP scale_);
  SEXP pareto_cdf_(SEXP x_, SEXP shape_, SEXP scale_);
  SEXP pareto_logcdf_(SEXP x_, SEXP shape_, SEXP scale_);
  SEXP pareto_quantile_(SEXP p_, SEXP shape_, SEXP scale_);

  // statistical_distributions/poisson.cpp
  SEXP poisson_pdf_(SEXP x_, SEXP lambda_);
  SEXP poisson_logpdf_(SEXP x_, SEXP lambda_);
  SEXP poisson_cdf_(SEXP x_, SEXP lambda_);
  SEXP poisson_logcdf_(SEXP x_, SEXP lambda_);
  SEXP poisson_quantile_(SEXP p_, SEXP lambda_);

  // statistical_distributions/rayleigh.cpp
  SEXP rayleigh_pdf_(SEXP x_, SEXP scale_);
  SEXP rayleigh_logpdf_(SEXP x_, SEXP scale_);
  SEXP rayleigh_cdf_(SEXP x_, SEXP scale_);
  SEXP rayleigh_logcdf_(SEXP x_, SEXP scale_);
  SEXP rayleigh_quantile_(SEXP p_, SEXP scale_);

  // statistical_distributions/saspoint5.cpp
  SEXP saspoint5_pdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP saspoint5_logpdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP saspoint5_cdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP saspoint5_logcdf_(SEXP x_, SEXP location_, SEXP scale_);
  SEXP saspoint5_quantile_(SEXP p_, SEXP location_, SEXP scale_);

  // statistical_distributions/skew_normal.cpp
  SEXP skew_normal_pdf_(SEXP x_, SEXP location_, SEXP scale_, SEXP shape_);
  SEXP skew_normal_logpdf_(SEXP x_, SEXP location_, SEXP scale_, SEXP shape_);
  SEXP skew_normal_cdf_(SEXP x_, SEXP location_, SEXP scale_, SEXP shape_);
  SEXP skew_normal_logcdf_(SEXP x_, SEXP location_, SEXP scale_, SEXP shape_);
  SEXP skew_normal_quantile_(SEXP p_, SEXP location_, SEXP scale_, SEXP shape_);

  // statistical_distributions/students_t.cpp
  SEXP students_t_pdf_(SEXP x_, SEXP df_);
  SEXP students_t_logpdf_(SEXP x_, SEXP df_);
  SEXP students_t_cdf_(SEXP x_, SEXP df_);
  SEXP students_t_logcdf_(SEXP x_, SEXP df_);
  SEXP students_t_quantile_(SEXP p_, SEXP df_);

  // statistical_distributions/triangular.cpp
  SEXP triangular_pdf_(SEXP x_, SEXP lower_, SEXP mode_, SEXP upper_);
  SEXP triangular_logpdf_(SEXP x_, SEXP lower_, SEXP mode_, SEXP upper_);
  SEXP triangular_cdf_(SEXP x_, SEXP lower_, SEXP mode_, SEXP upper_);
  SEXP triangular_logcdf_(SEXP x_, SEXP lower_, SEXP mode_, SEXP upper_);
  SEXP triangular_quantile_(SEXP p_, SEXP lower_, SEXP mode_, SEXP upper_);

  // statistical_distributions/uniform.cpp
  SEXP uniform_pdf_(SEXP x_, SEXP lower_, SEXP upper_);
  SEXP uniform_logpdf_(SEXP x_, SEXP lower_, SEXP upper_);
  SEXP uniform_cdf_(SEXP x_, SEXP lower_, SEXP upper_);
  SEXP uniform_logcdf_(SEXP x_, SEXP lower_, SEXP upper_);
  SEXP uniform_quantile_(SEXP p_, SEXP lower_, SEXP upper_);

  // statistical_distributions/weibull.cpp
  SEXP weibull_pdf_(SEXP x_, SEXP shape_, SEXP scale_);
  SEXP weibull_logpdf_(SEXP x_, SEXP shape_, SEXP scale_);
  SEXP weibull_cdf_(SEXP x_, SEXP shape_, SEXP scale_);
  SEXP weibull_logcdf_(SEXP x_, SEXP shape_, SEXP scale_);
  SEXP weibull_quantile_(SEXP p_, SEXP shape_, SEXP scale_);

  // vector_functionals/norms.cpp
  SEXP l0_pseudo_norm_(SEXP x_);
  SEXP hamming_distance_(SEXP x_, SEXP y_);
  SEXP l1_norm_(SEXP x_);
  SEXP l1_distance_(SEXP x_, SEXP y_);
  SEXP l2_norm_(SEXP x_);
  SEXP l2_distance_(SEXP x_, SEXP y_);
  SEXP sup_norm_(SEXP x_);
  SEXP sup_distance_(SEXP x_, SEXP y_);
  SEXP lp_norm_(SEXP x_, SEXP p_);
  SEXP lp_distance_(SEXP x_, SEXP y_, SEXP p_);
  SEXP total_variation_(SEXP x_);

  // rootfinding_and_minimisation/without_derivatives.cpp
  SEXP bisect_(SEXP f_, SEXP a_, SEXP b_, SEXP eps_, SEXP max_iter_);
  SEXP bracket_and_solve_root_(SEXP f_, SEXP guess_, SEXP factor_, SEXP rising_, SEXP eps_, SEXP max_iter_);
  SEXP toms748_solve_(SEXP f_, SEXP a_, SEXP b_, SEXP eps_, SEXP max_iter_);

  // rootfinding_and_minimisation/with_derivatives.cpp
  SEXP newton_raphson_iterate_(SEXP f_, SEXP guess_, SEXP min_, SEXP max_, SEXP digits_, SEXP max_iter_);
  SEXP halley_iterate_(SEXP f_, SEXP guess_, SEXP min_, SEXP max_, SEXP digits_, SEXP max_iter_);
  SEXP schroder_iterate_(SEXP f_, SEXP guess_, SEXP min_, SEXP max_, SEXP digits_, SEXP max_iter_);
  SEXP quadratic_roots_(SEXP a_, SEXP b_, SEXP c_);

  // rootfinding_and_minimisation/cubic_roots.cpp
  SEXP cubic_roots_(SEXP a_, SEXP b_, SEXP c_, SEXP d_);
  SEXP cubic_root_residual_(SEXP a_, SEXP b_, SEXP c_, SEXP d_, SEXP root_);
  SEXP cubic_root_condition_number_(SEXP a_, SEXP b_, SEXP c_, SEXP d_, SEXP root_);

  // rootfinding_and_minimisation/quartic_roots.cpp
  SEXP quartic_roots_(SEXP a_, SEXP b_, SEXP c_, SEXP d_, SEXP e_);

  // rootfinding_and_minimisation/minima.cpp
  SEXP brent_find_minima_(SEXP f_, SEXP a_, SEXP b_, SEXP digits_, SEXP max_iter_);

  // constants.cpp
  SEXP constants_();

  // statistics/univariate_statistics.cpp
  SEXP mean_(SEXP x_);
  SEXP variance_(SEXP x_);
  SEXP sample_variance_(SEXP x_);
  SEXP mean_and_sample_variance_(SEXP x_);
  SEXP skewness_(SEXP x_);
  SEXP kurtosis_(SEXP x_);
  SEXP excess_kurtosis_(SEXP x_);
  SEXP first_four_moments_(SEXP x_);
  SEXP median_(SEXP x_);
  SEXP median_absolute_deviation_(SEXP x_);
  SEXP interquartile_range_(SEXP x_);
  SEXP gini_coefficient_(SEXP x_);
  SEXP sample_gini_coefficient_(SEXP x_);
  SEXP mode_(SEXP x_);

  // statistics/bivariate_statistics.cpp
  SEXP covariance_(SEXP x_, SEXP y_);
  SEXP means_and_covariance_(SEXP x_, SEXP y_);
  SEXP correlation_coefficient_(SEXP x_, SEXP y_);

  // statistics/signal_statistics.cpp
  SEXP absolute_gini_coefficient_(SEXP x_);
  SEXP sample_absolute_gini_coefficient_(SEXP x_);
  SEXP hoyer_sparsity_(SEXP x_);
  SEXP oracle_snr_(SEXP x_, SEXP y_);
  SEXP oracle_snr_db_(SEXP x_, SEXP y_);
  SEXP m2m4_snr_estimator_(SEXP x_, SEXP y_, SEXP z_);
  SEXP m2m4_snr_estimator_db_(SEXP x_, SEXP y_, SEXP z_);

  // statistics/anderson_darling_test.cpp
  SEXP anderson_darling_normality_statistic_(SEXP x_, SEXP y_, SEXP z_);

  // statistics/t_tests.cpp
  SEXP one_sample_t_test_params_(SEXP x_, SEXP y_, SEXP z_, SEXP w_);
  SEXP one_sample_t_test_(SEXP x_, SEXP y_);
  SEXP two_sample_t_test_(SEXP x_, SEXP y_);
  SEXP paired_samples_t_test_(SEXP x_, SEXP y_);

  // statistics/z_tests.cpp
  SEXP one_sample_z_test_params_(SEXP x_, SEXP y_, SEXP z_, SEXP w_);
  SEXP one_sample_z_test_(SEXP x_, SEXP y_);
  SEXP two_sample_z_test_(SEXP x_, SEXP y_);

  // statistics/runs_tests.cpp
  SEXP runs_above_and_below_threshold_(SEXP x_, SEXP y_);
  SEXP runs_above_and_below_median_(SEXP x_);

  // statistics/ljung_box_test.cpp
  SEXP ljung_box_(SEXP x_, SEXP y_, SEXP z_);

  // statistics/linear_regression.cpp
  SEXP simple_ordinary_least_squares_(SEXP x_, SEXP y_);
  SEXP simple_ordinary_least_squares_with_R_squared_(SEXP x_, SEXP y_);

  // statistics/chatterjee_correlation.cpp
  SEXP chatterjee_correlation_(SEXP x_, SEXP y_);

  // interpolators/barycentric_rational.cpp
  SEXP barycentric_rational_init_(SEXP x_, SEXP y_, SEXP order_);
  SEXP barycentric_rational_eval_(SEXP ptr_, SEXP x_);
  SEXP barycentric_rational_prime_(SEXP ptr_, SEXP x_);

  // interpolators/bezier_polynomial.cpp
  SEXP bezier_polynomial_init_(SEXP control_points_);
  SEXP bezier_polynomial_eval_(SEXP ptr_, SEXP x_);
  SEXP bezier_polynomial_prime_(SEXP ptr_, SEXP x_);
  SEXP bezier_polynomial_edit_control_point_(SEXP ptr_, SEXP p_, SEXP index_);

  // interpolators/bilinear_uniform.cpp
  SEXP bilinear_uniform_init_(SEXP fieldData_, SEXP rows_, SEXP cols_, SEXP dx_, SEXP dy_, SEXP x0_, SEXP y0_);
  SEXP bilinear_uniform_eval_(SEXP ptr_, SEXP x_, SEXP y_);

  // interpolators/cardinal_cubic_b_spline.cpp
  SEXP cardinal_cubic_b_spline_init_(SEXP y_, SEXP t0_, SEXP h_, SEXP left_endpoint_derivative_, SEXP right_endpoint_derivative_);
  SEXP cardinal_cubic_b_spline_eval_(SEXP ptr_, SEXP x_);
  SEXP cardinal_cubic_b_spline_prime_(SEXP ptr_, SEXP x_);
  SEXP cardinal_cubic_b_spline_double_prime_(SEXP ptr_, SEXP x_);

  // interpolators/cardinal_quadratic_b_spline.cpp
  SEXP cardinal_quadratic_b_spline_init_(SEXP y_, SEXP t0_, SEXP h_, SEXP left_endpoint_derivative_, SEXP right_endpoint_derivative_);
  SEXP cardinal_quadratic_b_spline_eval_(SEXP ptr_, SEXP x_);
  SEXP cardinal_quadratic_b_spline_prime_(SEXP ptr_, SEXP x_);

  // interpolators/cardinal_quintic_b_spline.cpp
  SEXP cardinal_quintic_b_spline_init_(SEXP y_, SEXP t0_, SEXP h_, SEXP left_endpoint_derivative_, SEXP right_endpoint_derivative_);
  SEXP cardinal_quintic_b_spline_eval_(SEXP ptr_, SEXP x_);
  SEXP cardinal_quintic_b_spline_prime_(SEXP ptr_, SEXP x_);
  SEXP cardinal_quintic_b_spline_double_prime_(SEXP ptr_, SEXP x_);

  // interpolators/catmull_rom.cpp
  SEXP catmull_rom_init_(SEXP points_, SEXP closed_, SEXP alpha_);
  SEXP catmull_rom_eval_(SEXP ptr_, SEXP x_);
  SEXP catmull_rom_prime_(SEXP ptr_, SEXP x_);
  SEXP catmull_rom_max_parameter_(SEXP ptr_);
  SEXP catmull_rom_parameter_at_point_(SEXP ptr_, SEXP i_);

  // interpolators/cubic_hermite.cpp
  SEXP cubic_hermite_init_(SEXP abscissas_, SEXP ordinates_, SEXP derivatives_);
  SEXP cubic_hermite_eval_(SEXP ptr_, SEXP x_);
  SEXP cubic_hermite_prime_(SEXP ptr_, SEXP x_);
  SEXP cubic_hermite_push_back_(SEXP ptr_, SEXP x_, SEXP y_, SEXP dydx_);
  SEXP cubic_hermite_domain_(SEXP ptr_);
  SEXP cardinal_cubic_hermite_init_(SEXP y_, SEXP dydx_, SEXP x0_, SEXP dx_);
  SEXP cardinal_cubic_hermite_eval_(SEXP ptr_, SEXP x_);
  SEXP cardinal_cubic_hermite_prime_(SEXP ptr_, SEXP x_);
  SEXP cardinal_cubic_hermite_domain_(SEXP ptr_);

  // interpolators/makima.cpp
  SEXP makima_init_(SEXP abscissa_, SEXP ordinates_, SEXP left_endpoint_derivative_, SEXP right_endpoint_derivative_);
  SEXP makima_eval_(SEXP ptr_, SEXP x_);
  SEXP makima_prime_(SEXP ptr_, SEXP x_);
  SEXP makima_push_back_(SEXP ptr_, SEXP x_, SEXP y_);

  // interpolators/pchip.cpp
  SEXP pchip_init_(SEXP abscissa_, SEXP ordinates_, SEXP left_endpoint_derivative_, SEXP right_endpoint_derivative_);
  SEXP pchip_eval_(SEXP ptr_, SEXP x_);
  SEXP pchip_prime_(SEXP ptr_, SEXP x_);
  SEXP pchip_push_back_(SEXP ptr_, SEXP x_, SEXP y_);

  // interpolators/quintic_hermite.cpp
  SEXP quintic_hermite_init_(SEXP x_, SEXP y_, SEXP dydx_, SEXP dy2dx2_);
  SEXP quintic_hermite_eval_(SEXP ptr_, SEXP x_);
  SEXP quintic_hermite_prime_(SEXP ptr_, SEXP x_);
  SEXP quintic_hermite_double_prime_(SEXP ptr_, SEXP x_);
  SEXP quintic_hermite_push_back_(SEXP ptr_, SEXP x_, SEXP y_, SEXP dydx_, SEXP dy2dx2_);
  SEXP quintic_hermite_domain_(SEXP ptr_);
  SEXP cardinal_quintic_hermite_init_(SEXP y_, SEXP dydx_, SEXP dy2dx2_, SEXP x0_, SEXP dx_);
  SEXP cardinal_quintic_hermite_eval_(SEXP ptr_, SEXP x_);
  SEXP cardinal_quintic_hermite_prime_(SEXP ptr_, SEXP x_);
  SEXP cardinal_quintic_hermite_double_prime_(SEXP ptr_, SEXP x_);
  SEXP cardinal_quintic_hermite_domain_(SEXP ptr_);

  static const R_CallMethodDef CallEntries[] = {
    // gamma_functions.cpp
    {"tgamma_",     (DL_FUNC) &tgamma_,     1},
    {"tgamma1pm1_", (DL_FUNC) &tgamma1pm1_, 1},
    {"lgamma_",     (DL_FUNC) &lgamma_,     1},
    {"digamma_",    (DL_FUNC) &digamma_,    1},
    {"trigamma_",   (DL_FUNC) &trigamma_,   1},
    {"polygamma_",  (DL_FUNC) &polygamma_,  2},
    {"tgamma_ratio_", (DL_FUNC) &tgamma_ratio_, 2},
    {"tgamma_delta_ratio_", (DL_FUNC) &tgamma_delta_ratio_, 2},
    {"gamma_p_",    (DL_FUNC) &gamma_p_,    2},
    {"gamma_q_",    (DL_FUNC) &gamma_q_,    2},
    {"tgamma_lower_", (DL_FUNC) &tgamma_lower_, 2},
    {"tgamma_upper_", (DL_FUNC) &tgamma_upper_, 2},
    {"gamma_q_inv_", (DL_FUNC) &gamma_q_inv_, 2},
    {"gamma_p_inv_", (DL_FUNC) &gamma_p_inv_, 2},
    {"gamma_q_inva_", (DL_FUNC) &gamma_q_inva_, 2},
    {"gamma_p_inva_", (DL_FUNC) &gamma_p_inva_, 2},
    {"gamma_p_derivative_", (DL_FUNC) &gamma_p_derivative_, 2},

    // number_series.cpp
    {"bernoulli_b2n_", (DL_FUNC) &bernoulli_b2n_, 1},
    {"max_bernoulli_b2n_", (DL_FUNC) &max_bernoulli_b2n_, 0},
    {"unchecked_bernoulli_b2n_", (DL_FUNC) &unchecked_bernoulli_b2n_, 1},
    {"bernoulli_b2n_range_", (DL_FUNC) &bernoulli_b2n_range_, 2},
    {"tangent_t2n_", (DL_FUNC) &tangent_t2n_, 1},
    {"tangent_t2n_range_", (DL_FUNC) &tangent_t2n_range_, 2},
    {"prime_",      (DL_FUNC) &prime_,      1},
    {"max_prime_",  (DL_FUNC) &max_prime_,  0},
    {"fibonacci_",  (DL_FUNC) &fibonacci_,  1},
    {"unchecked_fibonacci_", (DL_FUNC) &unchecked_fibonacci_, 1},

    // factorials_and_binomial_coefficients.cpp
    {"factorial_", (DL_FUNC) &factorial_, 1},
    {"unchecked_factorial_", (DL_FUNC) &unchecked_factorial_, 1},
    {"max_factorial_", (DL_FUNC) &max_factorial_, 0},
    {"double_factorial_", (DL_FUNC) &double_factorial_, 1},
    {"rising_factorial_", (DL_FUNC) &rising_factorial_, 2},
    {"falling_factorial_", (DL_FUNC) &falling_factorial_, 2},
    {"binomial_coefficient_", (DL_FUNC) &binomial_coefficient_, 2},

    // beta_functions.cpp
    {"beta_", (DL_FUNC) &beta_, 2},
    {"ibeta_", (DL_FUNC) &ibeta_, 3},
    {"ibetac_", (DL_FUNC) &ibetac_, 3},
    {"beta_incomplete_", (DL_FUNC) &beta_incomplete_, 3},
    {"betac_", (DL_FUNC) &betac_, 3},
    {"ibeta_inv_", (DL_FUNC) &ibeta_inv_, 3},
    {"ibetac_inv_", (DL_FUNC) &ibetac_inv_, 3},
    {"ibeta_inva_", (DL_FUNC) &ibeta_inva_, 3},
    {"ibetac_inva_", (DL_FUNC) &ibetac_invb_, 3},
    {"ibeta_invb_", (DL_FUNC) &ibeta_invb_, 3},
    {"ibetac_invb_", (DL_FUNC) &ibetac_invb_, 3},
    {"ibeta_derivative_", (DL_FUNC) &ibeta_derivative_, 3},

    // error_functions.cpp
    {"erf_", (DL_FUNC) &erf_, 1},
    {"erfc_", (DL_FUNC) &erfc_, 1},
    {"erf_inv_", (DL_FUNC) &erf_inv_, 1},
    {"erfc_inv_", (DL_FUNC) &erfc_inv_, 1},

    // polynomials.cpp
    {"legendre_p_", (DL_FUNC) &legendre_p_, 2},
    {"legendre_p_prime_", (DL_FUNC) &legendre_p_prime_, 2},
    {"legendre_p_zeros_", (DL_FUNC) &legendre_p_zeros_, 1},
    {"legendre_p_m_", (DL_FUNC) &legendre_p_m_, 3},
    {"legendre_q_", (DL_FUNC) &legendre_q_, 2},
    {"legendre_next_", (DL_FUNC) &legendre_next_, 4},
    {"legendre_next_m_", (DL_FUNC) &legendre_next_m_, 5},
    {"laguerre_", (DL_FUNC) &laguerre_, 2},
    {"laguerre_m_", (DL_FUNC) &laguerre_m_, 3},
    {"laguerre_next_", (DL_FUNC) &laguerre_next_, 4},
    {"laguerre_next_m_", (DL_FUNC) &laguerre_next_m_, 5},
    {"hermite_", (DL_FUNC) &hermite_, 2},
    {"hermite_next_", (DL_FUNC) &hermite_next_, 4},
    {"chebyshev_next_", (DL_FUNC) &chebyshev_next_, 3},
    {"chebyshev_t_", (DL_FUNC) &chebyshev_t_, 2},
    {"chebyshev_u_", (DL_FUNC) &chebyshev_u_, 2},
    {"chebyshev_t_prime_", (DL_FUNC) &chebyshev_t_prime_, 2},
    {"chebyshev_clenshaw_recurrence_", (DL_FUNC) &chebyshev_clenshaw_recurrence_, 2},
    {"chebyshev_clenshaw_recurrence_ab_", (DL_FUNC) &chebyshev_clenshaw_recurrence_ab_, 4},
    {"spherical_harmonic_", (DL_FUNC) &spherical_harmonic_, 4},
    {"spherical_harmonic_r_", (DL_FUNC) &spherical_harmonic_r_, 4},
    {"spherical_harmonic_i_", (DL_FUNC) &spherical_harmonic_i_, 4},
    {"gegenbauer_", (DL_FUNC) &gegenbauer_, 3},
    {"gegenbauer_prime_", (DL_FUNC) &gegenbauer_prime_, 3},
    {"gegenbauer_derivative_", (DL_FUNC) &gegenbauer_derivative_, 4},
    {"jacobi_", (DL_FUNC) &jacobi_, 4},
    {"jacobi_derivative_", (DL_FUNC) &jacobi_derivative_, 5},
    {"jacobi_prime_", (DL_FUNC) &jacobi_prime_, 4},
    {"jacobi_double_prime_", (DL_FUNC) &jacobi_double_prime_, 4},

    // bessel_functions.cpp
    {"cyl_bessel_j_", (DL_FUNC) &cyl_bessel_j_, 2},
    {"cyl_neumann_", (DL_FUNC) &cyl_neumann_, 2},
    {"cyl_bessel_j_zero_", (DL_FUNC) &cyl_bessel_j_zero_, 2},
    {"cyl_neumann_zero_", (DL_FUNC) &cyl_neumann_zero_, 2},
    {"cyl_bessel_j_zero_multiple_", (DL_FUNC) &cyl_bessel_j_zero_multiple_, 3},
    {"cyl_neumann_zero_multiple_", (DL_FUNC) &cyl_neumann_zero_multiple_, 3},
    {"cyl_bessel_i_", (DL_FUNC) &cyl_bessel_i_, 2},
    {"cyl_bessel_k_", (DL_FUNC) &cyl_bessel_k_, 2},
    {"sph_bessel_", (DL_FUNC) &sph_bessel_, 2},
    {"sph_neumann_", (DL_FUNC) &sph_neumann_, 2},
    {"cyl_bessel_j_prime_", (DL_FUNC) &cyl_bessel_j_prime_, 2},
    {"cyl_neumann_prime_", (DL_FUNC) &cyl_neumann_prime_, 2},
    {"cyl_bessel_i_prime_", (DL_FUNC) &cyl_bessel_i_prime_, 2},
    {"cyl_bessel_k_prime_", (DL_FUNC) &cyl_bessel_k_prime_, 2},
    {"sph_bessel_prime_", (DL_FUNC) &sph_bessel_prime_, 2},
    {"sph_neumann_prime_", (DL_FUNC) &sph_neumann_prime_, 2},

    // airy_functions.cpp
    {"airy_ai_", (DL_FUNC) &airy_ai_, 1},
    {"airy_bi_", (DL_FUNC) &airy_bi_, 1},
    {"airy_ai_prime_", (DL_FUNC) &airy_ai_prime_, 1},
    {"airy_bi_prime_", (DL_FUNC) &airy_bi_prime_, 1},
    {"airy_ai_zero_", (DL_FUNC) &airy_ai_zero_, 1},
    {"airy_bi_zero_", (DL_FUNC) &airy_bi_zero_, 1},
    {"airy_ai_zero_multiple_", (DL_FUNC) &airy_ai_zero_multiple_, 2},
    {"airy_bi_zero_multiple_", (DL_FUNC) &airy_bi_zero_multiple_, 2},

    // elliptic_integrals.cpp
    {"ellint_rf_", (DL_FUNC) &ellint_rf_, 3},
    {"ellint_rd_", (DL_FUNC) &ellint_rd_, 3},
    {"ellint_rj_", (DL_FUNC) &ellint_rj_, 4},
    {"ellint_rc_", (DL_FUNC) &ellint_rc_, 2},
    {"ellint_rg_", (DL_FUNC) &ellint_rg_, 3},
    {"ellint_1_incomplete_", (DL_FUNC) &ellint_1_incomplete_, 2},
    {"ellint_1_", (DL_FUNC) &ellint_1_, 1},
    {"ellint_2_incomplete_", (DL_FUNC) &ellint_2_incomplete_, 2},
    {"ellint_2_", (DL_FUNC) &ellint_2_, 1},
    {"ellint_3_incomplete_", (DL_FUNC) &ellint_3_incomplete_, 3},
    {"ellint_3_", (DL_FUNC) &ellint_3_, 2},
    {"ellint_d_incomplete_", (DL_FUNC) &ellint_d_incomplete_, 2},
    {"ellint_d_", (DL_FUNC) &ellint_d_, 1},
    {"jacobi_zeta_", (DL_FUNC) &jacobi_zeta_, 2},
    {"heuman_lambda_", (DL_FUNC) &heuman_lambda_, 2},

    // jacobi_elliptic_functions.cpp
    {"jacobi_elliptic_", (DL_FUNC) &jacobi_elliptic_, 2},
    {"jacobi_cd_", (DL_FUNC) &jacobi_cd_, 2},
    {"jacobi_cn_", (DL_FUNC) &jacobi_cn_, 2},
    {"jacobi_cs_", (DL_FUNC) &jacobi_cs_, 2},
    {"jacobi_dc_", (DL_FUNC) &jacobi_dc_, 2},
    {"jacobi_dn_", (DL_FUNC) &jacobi_dn_, 2},
    {"jacobi_ds_", (DL_FUNC) &jacobi_ds_, 2},
    {"jacobi_nc_", (DL_FUNC) &jacobi_nc_, 2},
    {"jacobi_nd_", (DL_FUNC) &jacobi_nd_, 2},
    {"jacobi_ns_", (DL_FUNC) &jacobi_ns_, 2},
    {"jacobi_sc_", (DL_FUNC) &jacobi_sc_, 2},
    {"jacobi_sd_", (DL_FUNC) &jacobi_sd_, 2},
    {"jacobi_sn_", (DL_FUNC) &jacobi_sn_, 2},

    // jacobi_theta_functions.cpps
    {"jacobi_theta1_", (DL_FUNC) &jacobi_theta1_, 2},
    {"jacobi_theta1tau_", (DL_FUNC) &jacobi_theta1tau_, 2},
    {"jacobi_theta2_", (DL_FUNC) &jacobi_theta2_, 2},
    {"jacobi_theta2tau_", (DL_FUNC) &jacobi_theta2tau_, 2},
    {"jacobi_theta3_", (DL_FUNC) &jacobi_theta3_, 2},
    {"jacobi_theta3tau_", (DL_FUNC) &jacobi_theta3tau_, 2},
    {"jacobi_theta3m1_", (DL_FUNC) &jacobi_theta3m1_, 2},
    {"jacobi_theta3m1tau_", (DL_FUNC) &jacobi_theta3m1tau_, 2},
    {"jacobi_theta4_", (DL_FUNC) &jacobi_theta4_, 2},
    {"jacobi_theta4tau_", (DL_FUNC) &jacobi_theta4tau_, 2},
    {"jacobi_theta4m1_", (DL_FUNC) &jacobi_theta4m1_, 2},
    {"jacobi_theta4m1tau_", (DL_FUNC) &jacobi_theta4m1tau_, 2},

    // lambert_w_function.cpp
    {"lambert_w0_", (DL_FUNC) &lambert_w0_, 1},
    {"lambert_wm1_", (DL_FUNC) &lambert_wm1_, 1},
    {"lambert_w0_prime_", (DL_FUNC) &lambert_w0_prime_, 1},
    {"lambert_wm1_prime_", (DL_FUNC) &lambert_wm1_prime_, 1},

    // riemann_zeta_function.cpp
    {"zeta_", (DL_FUNC) &zeta_, 1},

    // exponential_integrals.cpp
    {"expint_en_", (DL_FUNC) &expint_en_, 2},
    {"expint_ei_", (DL_FUNC) &expint_ei_, 1},

    // hankel_functions.cpp
    {"cyl_hankel_1_", (DL_FUNC) &cyl_hankel_1_, 2},
    {"cyl_hankel_2_", (DL_FUNC) &cyl_hankel_2_, 2},
    {"sph_hankel_1_", (DL_FUNC) &sph_hankel_1_, 2},
    {"sph_hankel_2_", (DL_FUNC) &sph_hankel_2_, 2},

    // hypergeometric_functions.cpp
    {"hypergeometric_1F0_", (DL_FUNC) &hypergeometric_1F0_, 2},
    {"hypergeometric_0F1_", (DL_FUNC) &hypergeometric_0F1_, 2},
    {"hypergeometric_2F0_", (DL_FUNC) &hypergeometric_2F0_, 3},
    {"hypergeometric_1F1_", (DL_FUNC) &hypergeometric_1F1_, 3},
    {"hypergeometric_1F1_regularized_", (DL_FUNC) &hypergeometric_1F1_regularized_, 3},
    {"log_hypergeometric_1F1_", (DL_FUNC) &log_hypergeometric_1F1_, 3},
    {"hypergeometric_pFq_", (DL_FUNC) &hypergeometric_pFq_, 3},

    // basic_functions.cpp
    {"sin_pi_", (DL_FUNC) &sin_pi_, 1},
    {"cos_pi_", (DL_FUNC) &cos_pi_, 1},
    {"log1p_", (DL_FUNC) &log1p_, 1},
    {"expm1_", (DL_FUNC) &expm1_, 1},
    {"cbrt_", (DL_FUNC) &cbrt_, 1},
    {"sqrt1pm1_", (DL_FUNC) &sqrt1pm1_, 1},
    {"powm1_", (DL_FUNC) &powm1_, 2},
    {"hypot_", (DL_FUNC) &hypot_, 2},
    {"rsqrt_", (DL_FUNC) &rsqrt_, 1},

    // sinus_cardinal_hyperbolic_functions.cpp
    {"sinc_pi_", (DL_FUNC) &sinc_pi_, 1},
    {"sinhc_pi_", (DL_FUNC) &sinhc_pi_, 1},

    // inverse_hyperbolic_functions.cpp
    {"asinh_", (DL_FUNC) &asinh_, 1},
    {"acosh_", (DL_FUNC) &acosh_, 1},
    {"atanh_", (DL_FUNC) &atanh_, 1},

    // owens_t_function.cpp
    {"owens_t_", (DL_FUNC) &owens_t_, 2},

    // quadrature_and_differentiation/double_exponential.cpp
    {"tanh_sinh_", (DL_FUNC) &tanh_sinh_, 5},
    {"sinh_sinh_", (DL_FUNC) &sinh_sinh_, 3},
    {"exp_sinh_", (DL_FUNC) &exp_sinh_, 5},

    // quadrature_and_differentiation/fourier_integrals.cpp
    {"ooura_fourier_sin_", (DL_FUNC) &ooura_fourier_sin_, 4},
    {"ooura_fourier_cos_", (DL_FUNC) &ooura_fourier_cos_, 4},

    // quadrature_and_differentiation/trapezoidal.cpp
    {"trapezoidal_", (DL_FUNC) &trapezoidal_, 5},

    // quadrature_and_differentiation/gauss_legendre.cpp
    {"gauss_legendre_", (DL_FUNC) &gauss_legendre_, 4},

    // quadrature_and_differentiation/gauss_kronrod.cpp
    {"gauss_kronrod_", (DL_FUNC) &gauss_kronrod_, 6},

    // quadrature_and_differentiation/numerical_differentiation.cpp
    {"finite_difference_derivative_", (DL_FUNC) &finite_difference_derivative_, 3},
    {"complex_step_derivative_", (DL_FUNC) &complex_step_derivative_, 2},

    // statistical_distributions/arcsine.cpp
    {"arcsine_pdf_", (DL_FUNC) &arcsine_pdf_, 3},
    {"arcsine_logpdf_", (DL_FUNC) &arcsine_logpdf_, 3},
    {"arcsine_cdf_", (DL_FUNC) &arcsine_cdf_, 3},
    {"arcsine_logcdf_", (DL_FUNC) &arcsine_logcdf_, 3},
    {"arcsine_quantile_", (DL_FUNC) &arcsine_quantile_, 3},

    // statistical_distributions/bernoulli.cpp
    {"bernoulli_pdf_", (DL_FUNC) &bernoulli_pdf_, 2},
    {"bernoulli_logpdf_", (DL_FUNC) &bernoulli_logpdf_, 2},
    {"bernoulli_cdf_", (DL_FUNC) &bernoulli_cdf_, 2},
    {"bernoulli_logcdf_", (DL_FUNC) &bernoulli_logcdf_, 2},
    {"bernoulli_quantile_", (DL_FUNC) &bernoulli_quantile_, 2},

    // statistical_distributions/beta.cpp
    {"beta_pdf_", (DL_FUNC) &beta_pdf_, 3},
    {"beta_logpdf_", (DL_FUNC) &beta_logpdf_, 3},
    {"beta_cdf_", (DL_FUNC) &beta_cdf_, 3},
    {"beta_logcdf_", (DL_FUNC) &beta_logcdf_, 3},
    {"beta_quantile_", (DL_FUNC) &beta_quantile_, 3},

    // statistical_distributions/binomial.cpp
    {"binomial_pdf_", (DL_FUNC) &binomial_pdf_, 3},
    {"binomial_logpdf_", (DL_FUNC) &binomial_logpdf_, 3},
    {"binomial_cdf_", (DL_FUNC) &binomial_cdf_, 3},
    {"binomial_logcdf_", (DL_FUNC) &binomial_logcdf_, 3},
    {"binomial_quantile_", (DL_FUNC) &binomial_quantile_, 3},

    // statistical_distributions/cauchy.cpp
    {"cauchy_pdf_", (DL_FUNC) &cauchy_pdf_, 3},
    {"cauchy_logpdf_", (DL_FUNC) &cauchy_logpdf_, 3},
    {"cauchy_cdf_", (DL_FUNC) &cauchy_cdf_, 3},
    {"cauchy_logcdf_", (DL_FUNC) &cauchy_logcdf_, 3},
    {"cauchy_quantile_", (DL_FUNC) &cauchy_quantile_, 3},

    // statistical_distributions/chi_squared.cpp
    {"chi_squared_pdf_", (DL_FUNC) &chi_squared_pdf_, 2},
    {"chi_squared_logpdf_", (DL_FUNC) &chi_squared_logpdf_, 2},
    {"chi_squared_cdf_", (DL_FUNC) &chi_squared_cdf_, 2},
    {"chi_squared_logcdf_", (DL_FUNC) &chi_squared_logcdf_, 2},
    {"chi_squared_quantile_", (DL_FUNC) &chi_squared_quantile_, 2},

    // statistical_distributions/exponential.cpp
    {"exponential_pdf_", (DL_FUNC) &exponential_pdf_, 2},
    {"exponential_logpdf_", (DL_FUNC) &exponential_logpdf_, 2},
    {"exponential_cdf_", (DL_FUNC) &exponential_cdf_, 2},
    {"exponential_logcdf_", (DL_FUNC) &exponential_logcdf_, 2},
    {"exponential_quantile_", (DL_FUNC) &exponential_quantile_, 2},

    // statistical_distributions/extreme_value.cpp
    {"extreme_value_pdf_", (DL_FUNC) &extreme_value_pdf_, 3},
    {"extreme_value_logpdf_", (DL_FUNC) &extreme_value_logpdf_, 3},
    {"extreme_value_cdf_", (DL_FUNC) &extreme_value_cdf_, 3},
    {"extreme_value_logcdf_", (DL_FUNC) &extreme_value_logcdf_, 3},
    {"extreme_value_quantile_", (DL_FUNC) &extreme_value_quantile_, 3},

    // statistical_distributions/fisher_f.cpp
    {"fisher_f_pdf_", (DL_FUNC) &fisher_f_pdf_, 3},
    {"fisher_f_logpdf_", (DL_FUNC) &fisher_f_logpdf_, 3},
    {"fisher_f_cdf_", (DL_FUNC) &fisher_f_cdf_, 3},
    {"fisher_f_logcdf_", (DL_FUNC) &fisher_f_logcdf_, 3},
    {"fisher_f_quantile_", (DL_FUNC) &fisher_f_quantile_, 3},

    // statistical_distributions/gamma.cpp
    {"gamma_pdf_", (DL_FUNC) &gamma_pdf_, 3},
    {"gamma_logpdf_", (DL_FUNC) &gamma_logpdf_, 3},
    {"gamma_cdf_", (DL_FUNC) &gamma_cdf_, 3},
    {"gamma_logcdf_", (DL_FUNC) &gamma_logcdf_, 3},
    {"gamma_quantile_", (DL_FUNC) &gamma_quantile_, 3},

    // statistical_distributions/geometric.cpp
    {"geometric_pdf_", (DL_FUNC) &geometric_pdf_, 2},
    {"geometric_logpdf_", (DL_FUNC) &geometric_logpdf_, 2},
    {"geometric_cdf_", (DL_FUNC) &geometric_cdf_, 2},
    {"geometric_logcdf_", (DL_FUNC) &geometric_logcdf_, 2},
    {"geometric_quantile_", (DL_FUNC) &geometric_quantile_, 2},

    // statistical_distributions/holtsmark.cpp
    {"holtsmark_pdf_", (DL_FUNC) &holtsmark_pdf_, 3},
    {"holtsmark_logpdf_", (DL_FUNC) &holtsmark_logpdf_, 3},
    {"holtsmark_cdf_", (DL_FUNC) &holtsmark_cdf_, 3},
    {"holtsmark_logcdf_", (DL_FUNC) &holtsmark_logcdf_, 3},
    {"holtsmark_quantile_", (DL_FUNC) &holtsmark_quantile_, 3},

    // statistical_distributions/hyperexponential.cpp
    {"hyperexponential_pdf_", (DL_FUNC) &hyperexponential_pdf_, 3},
    {"hyperexponential_logpdf_", (DL_FUNC) &hyperexponential_logpdf_, 3},
    {"hyperexponential_cdf_", (DL_FUNC) &hyperexponential_cdf_, 3},
    {"hyperexponential_logcdf_", (DL_FUNC) &hyperexponential_logcdf_, 3},
    {"hyperexponential_quantile_", (DL_FUNC) &hyperexponential_quantile_, 3},

    // statistical_distributions/hypergeometric.cpp
    {"hypergeometric_pdf_", (DL_FUNC) &hypergeometric_pdf_, 4},
    {"hypergeometric_logpdf_", (DL_FUNC) &hypergeometric_logpdf_, 4},
    {"hypergeometric_cdf_", (DL_FUNC) &hypergeometric_cdf_, 4},
    {"hypergeometric_logcdf_", (DL_FUNC) &hypergeometric_logcdf_, 4},
    {"hypergeometric_quantile_", (DL_FUNC) &hypergeometric_quantile_, 4},

    // statistical_distributions/inverse_chi_squared.cpp
    {"inverse_chi_squared_pdf_", (DL_FUNC) &inverse_chi_squared_pdf_, 3},
    {"inverse_chi_squared_logpdf_", (DL_FUNC) &inverse_chi_squared_logpdf_, 3},
    {"inverse_chi_squared_cdf_", (DL_FUNC) &inverse_chi_squared_cdf_, 3},
    {"inverse_chi_squared_logcdf_", (DL_FUNC) &inverse_chi_squared_logcdf_, 3},
    {"inverse_chi_squared_quantile_", (DL_FUNC) &inverse_chi_squared_quantile_, 3},

    // statistical_distributions/inverse_gamma.cpp
    {"inverse_gamma_pdf_", (DL_FUNC) &inverse_gamma_pdf_, 3},
    {"inverse_gamma_logpdf_", (DL_FUNC) &inverse_gamma_logpdf_, 3},
    {"inverse_gamma_cdf_", (DL_FUNC) &inverse_gamma_cdf_, 3},
    {"inverse_gamma_logcdf_", (DL_FUNC) &inverse_gamma_logcdf_, 3},
    {"inverse_gamma_quantile_", (DL_FUNC) &inverse_gamma_quantile_, 3},

    // statistical_distributions/inverse_gaussian.cpp
    {"inverse_gaussian_pdf_", (DL_FUNC) &inverse_gaussian_pdf_, 3},
    {"inverse_gaussian_logpdf_", (DL_FUNC) &inverse_gaussian_logpdf_, 3},
    {"inverse_gaussian_cdf_", (DL_FUNC) &inverse_gaussian_cdf_, 3},
    {"inverse_gaussian_logcdf_", (DL_FUNC) &inverse_gaussian_logcdf_, 3},
    {"inverse_gaussian_quantile_", (DL_FUNC) &inverse_gaussian_quantile_, 3},

    // statistical_distributions/kolmogorov_smirnov.cpp
    {"kolmogorov_smirnov_pdf_", (DL_FUNC) &kolmogorov_smirnov_pdf_, 2},
    {"kolmogorov_smirnov_logpdf_", (DL_FUNC) &kolmogorov_smirnov_logpdf_, 2},
    {"kolmogorov_smirnov_cdf_", (DL_FUNC) &kolmogorov_smirnov_cdf_, 2},
    {"kolmogorov_smirnov_logcdf_", (DL_FUNC) &kolmogorov_smirnov_logcdf_, 2},
    {"kolmogorov_smirnov_quantile_", (DL_FUNC) &kolmogorov_smirnov_quantile_, 2},

    // statistical_distributions/landau.cpp
    {"landau_pdf_", (DL_FUNC) &landau_pdf_, 3},
    {"landau_logpdf_", (DL_FUNC) &landau_logpdf_, 3},
    {"landau_cdf_", (DL_FUNC) &landau_cdf_, 3},
    {"landau_logcdf_", (DL_FUNC) &landau_logcdf_, 3},
    {"landau_quantile_", (DL_FUNC) &landau_quantile_, 3},

    // statistical_distributions/laplace.cpp
    {"laplace_pdf_", (DL_FUNC) &laplace_pdf_, 3},
    {"laplace_logpdf_", (DL_FUNC) &laplace_logpdf_, 3},
    {"laplace_cdf_", (DL_FUNC) &laplace_cdf_, 3},
    {"laplace_logcdf_", (DL_FUNC) &laplace_logcdf_, 3},
    {"laplace_quantile_", (DL_FUNC) &laplace_quantile_, 3},

    // statistical_distributions/logistic.cpp
    {"logistic_pdf_", (DL_FUNC) &logistic_pdf_, 3},
    {"logistic_logpdf_", (DL_FUNC) &logistic_logpdf_, 3},
    {"logistic_cdf_", (DL_FUNC) &logistic_cdf_, 3},
    {"logistic_logcdf_", (DL_FUNC) &logistic_logcdf_, 3},
    {"logistic_quantile_", (DL_FUNC) &logistic_quantile_, 3},

    // statistical_distributions/lognormal.cpp
    {"lognormal_pdf_", (DL_FUNC) &lognormal_pdf_, 3},
    {"lognormal_logpdf_", (DL_FUNC) &lognormal_logpdf_, 3},
    {"lognormal_cdf_", (DL_FUNC) &lognormal_cdf_, 3},
    {"lognormal_logcdf_", (DL_FUNC) &lognormal_logcdf_, 3},
    {"lognormal_quantile_", (DL_FUNC) &lognormal_quantile_, 3},

    // statistical_distributions/mapairy.cpp
    {"mapairy_pdf_", (DL_FUNC) &mapairy_pdf_, 3},
    {"mapairy_logpdf_", (DL_FUNC) &mapairy_logpdf_, 3},
    {"mapairy_cdf_", (DL_FUNC) &mapairy_cdf_, 3},
    {"mapairy_logcdf_", (DL_FUNC) &mapairy_logcdf_, 3},
    {"mapairy_quantile_", (DL_FUNC) &mapairy_quantile_, 3},

    // statistical_distributions/negative_binomial.cpp
    {"negative_binomial_pdf_", (DL_FUNC) &negative_binomial_pdf_, 3},
    {"negative_binomial_logpdf_", (DL_FUNC) &negative_binomial_logpdf_, 3},
    {"negative_binomial_cdf_", (DL_FUNC) &negative_binomial_cdf_, 3},
    {"negative_binomial_logcdf_", (DL_FUNC) &negative_binomial_logcdf_, 3},
    {"negative_binomial_quantile_", (DL_FUNC) &negative_binomial_quantile_, 3},

    // statistical_distributions/non_central_beta.cpp
    {"non_central_beta_pdf_", (DL_FUNC) &non_central_beta_pdf_, 4},
    {"non_central_beta_logpdf_", (DL_FUNC) &non_central_beta_logpdf_, 4},
    {"non_central_beta_cdf_", (DL_FUNC) &non_central_beta_cdf_, 4},
    {"non_central_beta_logcdf_", (DL_FUNC) &non_central_beta_logcdf_, 4},
    {"non_central_beta_quantile_", (DL_FUNC) &non_central_beta_quantile_, 4},

    // statistical_distributions/non_central_chi_squared.cpp
    {"non_central_chi_squared_pdf_", (DL_FUNC) &non_central_chi_squared_pdf_, 3},
    {"non_central_chi_squared_logpdf_", (DL_FUNC) &non_central_chi_squared_logpdf_, 3},
    {"non_central_chi_squared_cdf_", (DL_FUNC) &non_central_chi_squared_cdf_, 3},
    {"non_central_chi_squared_logcdf_", (DL_FUNC) &non_central_chi_squared_logcdf_, 3},
    {"non_central_chi_squared_quantile_", (DL_FUNC) &non_central_chi_squared_quantile_, 3},

    // statistical_distributions/non_central_f.cpp
    {"non_central_f_pdf_", (DL_FUNC) &non_central_f_pdf_, 4},
    {"non_central_f_logpdf_", (DL_FUNC) &non_central_f_logpdf_, 4},
    {"non_central_f_cdf_", (DL_FUNC) &non_central_f_cdf_, 4},
    {"non_central_f_logcdf_", (DL_FUNC) &non_central_f_logcdf_, 4},
    {"non_central_f_quantile_", (DL_FUNC) &non_central_f_quantile_, 4},

    // statistical_distributions/non_central_t.cpp
    {"non_central_t_pdf_", (DL_FUNC) &non_central_t_pdf_, 3},
    {"non_central_t_logpdf_", (DL_FUNC) &non_central_t_logpdf_, 3},
    {"non_central_t_cdf_", (DL_FUNC) &non_central_t_cdf_, 3},
    {"non_central_t_logcdf_", (DL_FUNC) &non_central_t_logcdf_, 3},
    {"non_central_t_quantile_", (DL_FUNC) &non_central_t_quantile_, 3},

    // statistical_distributions/normal.cpp
    {"normal_pdf_", (DL_FUNC) &normal_pdf_, 3},
    {"normal_logpdf_", (DL_FUNC) &normal_logpdf_, 3},
    {"normal_cdf_", (DL_FUNC) &normal_cdf_, 3},
    {"normal_logcdf_", (DL_FUNC) &normal_logcdf_, 3},
    {"normal_quantile_", (DL_FUNC) &normal_quantile_, 3},

    // statistical_distributions/pareto.cpp
    {"pareto_pdf_", (DL_FUNC) &pareto_pdf_, 3},
    {"pareto_logpdf_", (DL_FUNC) &pareto_logpdf_, 3},
    {"pareto_cdf_", (DL_FUNC) &pareto_cdf_, 3},
    {"pareto_logcdf_", (DL_FUNC) &pareto_logcdf_, 3},
    {"pareto_quantile_", (DL_FUNC) &pareto_quantile_, 3},

    // statistical_distributions/poisson.cpp
    {"poisson_pdf_", (DL_FUNC) &poisson_pdf_, 2},
    {"poisson_logpdf_", (DL_FUNC) &poisson_logpdf_, 2},
    {"poisson_cdf_", (DL_FUNC) &poisson_cdf_, 2},
    {"poisson_logcdf_", (DL_FUNC) &poisson_logcdf_, 2},
    {"poisson_quantile_", (DL_FUNC) &poisson_quantile_, 2},

    // statistical_distributions/rayleigh.cpp
    {"rayleigh_pdf_", (DL_FUNC) &rayleigh_pdf_, 2},
    {"rayleigh_logpdf_", (DL_FUNC) &rayleigh_logpdf_, 2},
    {"rayleigh_cdf_", (DL_FUNC) &rayleigh_cdf_, 2},
    {"rayleigh_logcdf_", (DL_FUNC) &rayleigh_logcdf_, 2},
    {"rayleigh_quantile_", (DL_FUNC) &rayleigh_quantile_, 2},

    // statistical_distributions/saspoint5.cpp
    {"saspoint5_pdf_", (DL_FUNC) &saspoint5_pdf_, 3},
    {"saspoint5_logpdf_", (DL_FUNC) &saspoint5_logpdf_, 3},
    {"saspoint5_cdf_", (DL_FUNC) &saspoint5_cdf_, 3},
    {"saspoint5_logcdf_", (DL_FUNC) &saspoint5_logcdf_, 3},
    {"saspoint5_quantile_", (DL_FUNC) &saspoint5_quantile_, 3},

    // statistical_distributions/skew_normal.cpp
    {"skew_normal_pdf_", (DL_FUNC) &skew_normal_pdf_, 4},
    {"skew_normal_logpdf_", (DL_FUNC) &skew_normal_logpdf_, 4},
    {"skew_normal_cdf_", (DL_FUNC) &skew_normal_cdf_, 4},
    {"skew_normal_logcdf_", (DL_FUNC) &skew_normal_logcdf_, 4},
    {"skew_normal_quantile_", (DL_FUNC) &skew_normal_quantile_, 4},

    // statistical_distributions/students_t.cpp
    {"students_t_pdf_", (DL_FUNC) &students_t_pdf_, 2},
    {"students_t_logpdf_", (DL_FUNC) &students_t_logpdf_, 2},
    {"students_t_cdf_", (DL_FUNC) &students_t_cdf_, 2},
    {"students_t_logcdf_", (DL_FUNC) &students_t_logcdf_, 2},
    {"students_t_quantile_", (DL_FUNC) &students_t_quantile_, 2},

    // statistical_distributions/triangular.cpp
    {"triangular_pdf_", (DL_FUNC) &triangular_pdf_, 4},
    {"triangular_logpdf_", (DL_FUNC) &triangular_logpdf_, 4},
    {"triangular_cdf_", (DL_FUNC) &triangular_cdf_, 4},
    {"triangular_logcdf_", (DL_FUNC) &triangular_logcdf_, 4},
    {"triangular_quantile_", (DL_FUNC) &triangular_quantile_, 4},

    // statistical_distributions/uniform.cpp
    {"uniform_pdf_", (DL_FUNC) &uniform_pdf_, 3},
    {"uniform_logpdf_", (DL_FUNC) &uniform_logpdf_, 3},
    {"uniform_cdf_", (DL_FUNC) &uniform_cdf_, 3},
    {"uniform_logcdf_", (DL_FUNC) &uniform_logcdf_, 3},
    {"uniform_quantile_", (DL_FUNC) &uniform_quantile_, 3},

    // statistical_distributions/weibull.cpp
    {"weibull_pdf_", (DL_FUNC) &weibull_pdf_, 3},
    {"weibull_logpdf_", (DL_FUNC) &weibull_logpdf_, 3},
    {"weibull_cdf_", (DL_FUNC) &weibull_cdf_, 3},
    {"weibull_logcdf_", (DL_FUNC) &weibull_logcdf_, 3},
    {"weibull_quantile_", (DL_FUNC) &weibull_quantile_, 3},

    // vector_functions/norms.cpp
    {"l0_pseudo_norm_", (DL_FUNC) &l0_pseudo_norm_, 1},
    {"hamming_distance_", (DL_FUNC) &hamming_distance_, 2},
    {"l1_norm_", (DL_FUNC) &l1_norm_, 1},
    {"l1_distance_", (DL_FUNC) &l1_distance_, 2},
    {"l2_norm_", (DL_FUNC) &l2_norm_, 1},
    {"l2_distance_", (DL_FUNC) &l2_distance_, 2},
    {"sup_norm_", (DL_FUNC) &sup_norm_, 1},
    {"sup_distance_", (DL_FUNC) &sup_distance_, 2},
    {"lp_norm_", (DL_FUNC) &lp_norm_, 2},
    {"lp_distance_", (DL_FUNC) &lp_distance_, 3},
    {"total_variation_", (DL_FUNC) &total_variation_, 1},

    // rootfinding_and_minimisation/without_derivatives.cpp
    {"bisect_", (DL_FUNC) &bisect_, 5},
    {"bracket_and_solve_root_", (DL_FUNC) &bracket_and_solve_root_, 6},
    {"toms748_solve_", (DL_FUNC) &toms748_solve_, 5},

    // rootfinding_and_minimisation/with_derivatives.cpp
    {"newton_raphson_iterate_", (DL_FUNC) &newton_raphson_iterate_, 6},
    {"halley_iterate_", (DL_FUNC) &halley_iterate_, 6},
    {"schroder_iterate_", (DL_FUNC) &schroder_iterate_, 6},
    {"quadratic_roots_", (DL_FUNC) &quadratic_roots_, 3},

    // rootfinding_and_minimisation/cubic_roots.cpp
    {"cubic_roots_", (DL_FUNC) &cubic_roots_, 4},
    {"cubic_root_residual_", (DL_FUNC) &cubic_root_residual_, 5},
    {"cubic_root_condition_number_", (DL_FUNC) &cubic_root_condition_number_, 5},


    // rootfinding_and_minimisation/quartic_roots.cpp
    {"quartic_roots_", (DL_FUNC) &quartic_roots_, 5},

    // rootfinding_and_minimisation/minima.cpp
    {"brent_find_minima_", (DL_FUNC) &brent_find_minima_, 5},

    // constants.cpp
    {"constants_", (DL_FUNC) &constants_, 0},

    // statistics/univariate_statistics.cpp
    {"mean_", (DL_FUNC) &mean_, 1},
    {"variance_", (DL_FUNC) &variance_, 1},
    {"sample_variance_", (DL_FUNC) &sample_variance_, 1},
    {"mean_and_sample_variance_", (DL_FUNC) &mean_and_sample_variance_, 1},
    {"skewness_", (DL_FUNC) &skewness_, 1},
    {"kurtosis_", (DL_FUNC) &kurtosis_, 1},
    {"excess_kurtosis_", (DL_FUNC) &excess_kurtosis_, 1},
    {"first_four_moments_", (DL_FUNC) &first_four_moments_, 1},
    {"median_", (DL_FUNC) &median_, 1},
    {"median_absolute_deviation_", (DL_FUNC) &median_absolute_deviation_, 1},
    {"interquartile_range_", (DL_FUNC) &interquartile_range_, 1},
    {"gini_coefficient_", (DL_FUNC) &gini_coefficient_, 1},
    {"sample_gini_coefficient_", (DL_FUNC) &sample_gini_coefficient_, 1},
    {"mode_", (DL_FUNC) &mode_, 1},

    // statistics/bivariate_statistics.cpp
    {"covariance_", (DL_FUNC) &covariance_, 2},
    {"means_and_covariance_", (DL_FUNC) &means_and_covariance_, 2},
    {"correlation_coefficient_", (DL_FUNC) &correlation_coefficient_, 2},

    // statistics/signal_statistics.cpp
    {"absolute_gini_coefficient_", (DL_FUNC) &absolute_gini_coefficient_, 1},
    {"sample_absolute_gini_coefficient_", (DL_FUNC) &sample_absolute_gini_coefficient_, 1},
    {"hoyer_sparsity_", (DL_FUNC) &hoyer_sparsity_, 1},
    {"oracle_snr_", (DL_FUNC) &oracle_snr_, 2},
    {"oracle_snr_db_", (DL_FUNC) &oracle_snr_db_, 2},
    {"m2m4_snr_estimator_db_", (DL_FUNC) &m2m4_snr_estimator_db_, 3},
    {"m2m4_snr_estimator_", (DL_FUNC) &m2m4_snr_estimator_, 3},

    // statistics/anderson_darling_test.cpp
    {"anderson_darling_normality_statistic_", (DL_FUNC) &anderson_darling_normality_statistic_,  3},

    // statistics/t_tests.cpp
    {"one_sample_t_test_params_", (DL_FUNC) &one_sample_t_test_params_,  4},
    {"one_sample_t_test_", (DL_FUNC) &one_sample_t_test_,  2},
    {"two_sample_t_test_", (DL_FUNC) &two_sample_t_test_,  2},
    {"paired_samples_t_test_", (DL_FUNC) &paired_samples_t_test_,  2},

    // statistics/z_tests.cpp
    {"one_sample_z_test_params_", (DL_FUNC) &one_sample_t_test_params_,  4},
    {"one_sample_z_test_", (DL_FUNC) &one_sample_t_test_,  2},
    {"two_sample_z_test_", (DL_FUNC) &two_sample_t_test_,  2},

    // statistics/runs_tests.cpp
    {"runs_above_and_below_threshold_", (DL_FUNC) &runs_above_and_below_threshold_,  2},
    {"runs_above_and_below_median_", (DL_FUNC) &runs_above_and_below_median_,  1},

    // statistics/ljung_box_test.cpp
    {"ljung_box_", (DL_FUNC) &ljung_box_,  3},

    // statistics/linear_regression.cpp
    {"simple_ordinary_least_squares_", (DL_FUNC) &simple_ordinary_least_squares_,  2},
    {"simple_ordinary_least_squares_with_R_squared_", (DL_FUNC) &simple_ordinary_least_squares_with_R_squared_,  2},

    // statistics/chatterjee_correlation.cpp
    {"chatterjee_correlation_", (DL_FUNC) &chatterjee_correlation_,  2},

    // interpolators/barycentric_rational.cpp
    {"barycentric_rational_init_", (DL_FUNC) &barycentric_rational_init_,  3},
    {"barycentric_rational_eval_", (DL_FUNC) &barycentric_rational_eval_,  2},
    {"barycentric_rational_prime_", (DL_FUNC) &barycentric_rational_prime_,  2},

    // interpolators/bezier_polynomial.cpp
    {"bezier_polynomial_init_", (DL_FUNC) &bezier_polynomial_init_,  1},
    {"bezier_polynomial_eval_", (DL_FUNC) &bezier_polynomial_eval_,  2},
    {"bezier_polynomial_prime_", (DL_FUNC) &bezier_polynomial_prime_,  2},
    {"bezier_polynomial_edit_control_point_", (DL_FUNC) &bezier_polynomial_edit_control_point_,  3},

    // interpolators/bilinear_uniform.cpp
    {"bilinear_uniform_init_", (DL_FUNC) &bilinear_uniform_init_,  7},
    {"bilinear_uniform_eval_", (DL_FUNC) &bilinear_uniform_eval_,  3},

    // interpolators/cardinal_cubic_b_spline.cpp
    {"cardinal_cubic_b_spline_init_", (DL_FUNC) &cardinal_cubic_b_spline_init_,  5},
    {"cardinal_cubic_b_spline_eval_", (DL_FUNC) &cardinal_cubic_b_spline_eval_,  2},
    {"cardinal_cubic_b_spline_prime_", (DL_FUNC) &cardinal_cubic_b_spline_prime_,  2},
    {"cardinal_cubic_b_spline_double_prime_", (DL_FUNC) &cardinal_cubic_b_spline_double_prime_,  2},

    // interpolators/cardinal_quadratic_b_spline.cpp
    {"cardinal_quadratic_b_spline_init_", (DL_FUNC) &cardinal_quadratic_b_spline_init_,  5},
    {"cardinal_quadratic_b_spline_eval_", (DL_FUNC) &cardinal_quadratic_b_spline_eval_,  2},
    {"cardinal_quadratic_b_spline_prime_", (DL_FUNC) &cardinal_quadratic_b_spline_prime_,  2},

    // interpolators/cardinal_quintic_b_spline.cpp
    {"cardinal_quintic_b_spline_init_", (DL_FUNC) &cardinal_quintic_b_spline_init_,  5},
    {"cardinal_quintic_b_spline_eval_", (DL_FUNC) &cardinal_quintic_b_spline_eval_,  2},
    {"cardinal_quintic_b_spline_prime_", (DL_FUNC) &cardinal_quintic_b_spline_prime_,  2},
    {"cardinal_quintic_b_spline_double_prime_", (DL_FUNC) &cardinal_quintic_b_spline_double_prime_,  2},

    // interpolators/catmull_rom.cpp
    {"catmull_rom_init_", (DL_FUNC) &catmull_rom_init_,  3},
    {"catmull_rom_eval_", (DL_FUNC) &catmull_rom_eval_,  2},
    {"catmull_rom_prime_", (DL_FUNC) &catmull_rom_prime_,  2},
    {"catmull_rom_max_parameter_", (DL_FUNC) &catmull_rom_max_parameter_,  1},
    {"catmull_rom_parameter_at_point_", (DL_FUNC) &catmull_rom_parameter_at_point_,  2},

    // interpolators/cubic_hermite.cpp
    {"cubic_hermite_init_", (DL_FUNC) &cubic_hermite_init_,  3},
    {"cubic_hermite_eval_", (DL_FUNC) &cubic_hermite_eval_,  2},
    {"cubic_hermite_prime_", (DL_FUNC) &cubic_hermite_prime_,  2},
    {"cubic_hermite_push_back_", (DL_FUNC) &cubic_hermite_push_back_,  4},
    {"cubic_hermite_domain_", (DL_FUNC) &cubic_hermite_domain_,  1},
    {"cardinal_cubic_hermite_init_", (DL_FUNC) &cardinal_cubic_hermite_init_,  4},
    {"cardinal_cubic_hermite_eval_", (DL_FUNC) &cardinal_cubic_hermite_eval_,  2},
    {"cardinal_cubic_hermite_prime_", (DL_FUNC) &cardinal_cubic_hermite_prime_,  2},
    {"cardinal_cubic_hermite_domain_", (DL_FUNC) &cardinal_cubic_hermite_domain_,  1},

    // interpolators/makima.cpp
    {"makima_init_", (DL_FUNC) &makima_init_,  4},
    {"makima_eval_", (DL_FUNC) &makima_eval_,  2},
    {"makima_prime_", (DL_FUNC) &makima_prime_,  2},
    {"makima_push_back_", (DL_FUNC) &makima_push_back_,  3},

    // interpolators/pchip.cpp
    {"pchip_init_", (DL_FUNC) &pchip_init_,  4},
    {"pchip_eval_", (DL_FUNC) &pchip_eval_,  2},
    {"pchip_prime_", (DL_FUNC) &pchip_prime_,  2},
    {"pchip_push_back_", (DL_FUNC) &pchip_push_back_,  3},

    // interpolators/quintic_hermite.cpp
    {"quintic_hermite_init_", (DL_FUNC) &quintic_hermite_init_,  4},
    {"quintic_hermite_eval_", (DL_FUNC) &quintic_hermite_eval_,  2},
    {"quintic_hermite_prime_", (DL_FUNC) &quintic_hermite_prime_,  2},
    {"quintic_hermite_double_prime_", (DL_FUNC) &quintic_hermite_double_prime_,  2},
    {"quintic_hermite_push_back_", (DL_FUNC) &quintic_hermite_push_back_,  5},
    {"quintic_hermite_domain_", (DL_FUNC) &quintic_hermite_domain_,  1},
    {"cardinal_quintic_hermite_init_", (DL_FUNC) &cardinal_quintic_hermite_init_,  5},
    {"cardinal_quintic_hermite_eval_", (DL_FUNC) &cardinal_quintic_hermite_eval_,  2},
    {"cardinal_quintic_hermite_prime_", (DL_FUNC) &cardinal_quintic_hermite_prime_,  2},
    {"cardinal_quintic_hermite_double_prime_", (DL_FUNC) &cardinal_quintic_hermite_double_prime_,  2},
    {"cardinal_quintic_hermite_domain_", (DL_FUNC) &cardinal_quintic_hermite_domain_,  1},

    {NULL, NULL, 0}
  };

  attribute_visible void R_init_boostmath(DllInfo* dll){
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
    R_forceSymbols(dll, TRUE);
  }
}
