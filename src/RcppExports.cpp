// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// search_pairs
NumericMatrix search_pairs(IntegerMatrix clusterings);
RcppExport SEXP _NewPackage_search_pairs(SEXP clusteringsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type clusterings(clusteringsSEXP);
    rcpp_result_gen = Rcpp::wrap(search_pairs(clusterings));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_NewPackage_search_pairs", (DL_FUNC) &_NewPackage_search_pairs, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_NewPackage(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
