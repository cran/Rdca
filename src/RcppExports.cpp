// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// exponential
arma::mat exponential(Rcpp::List lst, arma::vec time);
RcppExport SEXP _Rdca_exponential(SEXP lstSEXP, SEXP timeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type lst(lstSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type time(timeSEXP);
    rcpp_result_gen = Rcpp::wrap(exponential(lst, time));
    return rcpp_result_gen;
END_RCPP
}
// harmonic
arma::mat harmonic(Rcpp::List lst, arma::vec time);
RcppExport SEXP _Rdca_harmonic(SEXP lstSEXP, SEXP timeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type lst(lstSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type time(timeSEXP);
    rcpp_result_gen = Rcpp::wrap(harmonic(lst, time));
    return rcpp_result_gen;
END_RCPP
}
// hyperbolic
arma::mat hyperbolic(Rcpp::List lst, arma::vec time);
RcppExport SEXP _Rdca_hyperbolic(SEXP lstSEXP, SEXP timeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type lst(lstSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type time(timeSEXP);
    rcpp_result_gen = Rcpp::wrap(hyperbolic(lst, time));
    return rcpp_result_gen;
END_RCPP
}
// modified_hyperbolic
arma::mat modified_hyperbolic(Rcpp::List lst, arma::vec time);
RcppExport SEXP _Rdca_modified_hyperbolic(SEXP lstSEXP, SEXP timeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type lst(lstSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type time(timeSEXP);
    rcpp_result_gen = Rcpp::wrap(modified_hyperbolic(lst, time));
    return rcpp_result_gen;
END_RCPP
}
// decline_predict_cpp
NumericMatrix decline_predict_cpp(Rcpp::List decline_lst, Rcpp::List time_lst);
RcppExport SEXP _Rdca_decline_predict_cpp(SEXP decline_lstSEXP, SEXP time_lstSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type decline_lst(decline_lstSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type time_lst(time_lstSEXP);
    rcpp_result_gen = Rcpp::wrap(decline_predict_cpp(decline_lst, time_lst));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Rdca_exponential", (DL_FUNC) &_Rdca_exponential, 2},
    {"_Rdca_harmonic", (DL_FUNC) &_Rdca_harmonic, 2},
    {"_Rdca_hyperbolic", (DL_FUNC) &_Rdca_hyperbolic, 2},
    {"_Rdca_modified_hyperbolic", (DL_FUNC) &_Rdca_modified_hyperbolic, 2},
    {"_Rdca_decline_predict_cpp", (DL_FUNC) &_Rdca_decline_predict_cpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_Rdca(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
