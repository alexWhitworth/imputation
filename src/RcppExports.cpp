// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// dist_q
double dist_q(const NumericVector x, const NumericVector y, const int& q);
RcppExport SEXP imputation_dist_q(SEXP xSEXP, SEXP ySEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< const int& >::type q(qSEXP);
    __result = Rcpp::wrap(dist_q(x, y, q));
    return __result;
END_RCPP
}
// dist_q_matrix
NumericVector dist_q_matrix(const NumericVector& x_ref, NumericMatrix& x_rest, const int& q);
RcppExport SEXP imputation_dist_q_matrix(SEXP x_refSEXP, SEXP x_restSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type x_ref(x_refSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type x_rest(x_restSEXP);
    Rcpp::traits::input_parameter< const int& >::type q(qSEXP);
    __result = Rcpp::wrap(dist_q_matrix(x_ref, x_rest, q));
    return __result;
END_RCPP
}
// weighted_mean
double weighted_mean(NumericVector& x, NumericVector w);
RcppExport SEXP imputation_weighted_mean(SEXP xSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    __result = Rcpp::wrap(weighted_mean(x, w));
    return __result;
END_RCPP
}
// sort_indices
IntegerVector sort_indices(NumericVector& values);
RcppExport SEXP imputation_sort_indices(SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector& >::type values(valuesSEXP);
    __result = Rcpp::wrap(sort_indices(values));
    return __result;
END_RCPP
}
// kern_wt
NumericVector kern_wt(const double& sigma, const NumericVector& x);
RcppExport SEXP imputation_kern_wt(SEXP sigmaSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const double& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    __result = Rcpp::wrap(kern_wt(sigma, x));
    return __result;
END_RCPP
}
// impute_fn_knn
double impute_fn_knn(NumericVector& values, NumericVector& distances, int& k, double& sigma);
RcppExport SEXP imputation_impute_fn_knn(SEXP valuesSEXP, SEXP distancesSEXP, SEXP kSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector& >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type distances(distancesSEXP);
    Rcpp::traits::input_parameter< int& >::type k(kSEXP);
    Rcpp::traits::input_parameter< double& >::type sigma(sigmaSEXP);
    __result = Rcpp::wrap(impute_fn_knn(values, distances, k, sigma));
    return __result;
END_RCPP
}
// int_rownames
IntegerVector int_rownames(const NumericMatrix x);
RcppExport SEXP imputation_int_rownames(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix >::type x(xSEXP);
    __result = Rcpp::wrap(int_rownames(x));
    return __result;
END_RCPP
}
// rowname_match
int rowname_match(const IntegerVector& rowname_vec, const int& rowID);
RcppExport SEXP imputation_rowname_match(SEXP rowname_vecSEXP, SEXP rowIDSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowname_vec(rowname_vecSEXP);
    Rcpp::traits::input_parameter< const int& >::type rowID(rowIDSEXP);
    __result = Rcpp::wrap(rowname_match(rowname_vec, rowID));
    return __result;
END_RCPP
}
// which_na
SEXP which_na(SEXP x);
RcppExport SEXP imputation_which_na(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    __result = Rcpp::wrap(which_na(x));
    return __result;
END_RCPP
}
