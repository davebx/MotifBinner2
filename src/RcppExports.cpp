// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// trimEnds_cpp
Rcpp::List trimEnds_cpp(CharacterVector r_sread, CharacterVector r_id, CharacterVector r_qual, CharacterVector r_prefix, int pref_len, int pid_len, int suf_len);
RcppExport SEXP MotifBinner2_trimEnds_cpp(SEXP r_sreadSEXP, SEXP r_idSEXP, SEXP r_qualSEXP, SEXP r_prefixSEXP, SEXP pref_lenSEXP, SEXP pid_lenSEXP, SEXP suf_lenSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type r_sread(r_sreadSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type r_id(r_idSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type r_qual(r_qualSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type r_prefix(r_prefixSEXP);
    Rcpp::traits::input_parameter< int >::type pref_len(pref_lenSEXP);
    Rcpp::traits::input_parameter< int >::type pid_len(pid_lenSEXP);
    Rcpp::traits::input_parameter< int >::type suf_len(suf_lenSEXP);
    __result = Rcpp::wrap(trimEnds_cpp(r_sread, r_id, r_qual, r_prefix, pref_len, pid_len, suf_len));
    return __result;
END_RCPP
}
