#include <Rcpp.h>
#undef Realloc
#undef Free
#include <windows.h>
#include <string>
using namespace Rcpp;

// [[Rcpp::export]]
void press_and_release (Rcpp::NumericVector x){
  for (int ii = 0; ii < x.size(); ii++)
  {
    keybd_event(x[ii],0,0,0);
  }
  
  for (int ii = 0; ii < x.size(); ii++)
  {
    keybd_event(x[ii],0,KEYEVENTF_KEYUP,0);
  }
}

//Rcpp::sourceCpp("C:/Users/ChiHang/Documents/GitHub/KeyboardSimulator/press_and_release.cpp")
//alt 18
//alt 115