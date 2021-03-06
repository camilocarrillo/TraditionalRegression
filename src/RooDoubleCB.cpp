/***************************************************************************** 
 * Project: RooFit                                                           * 
 *                                                                           * 
 * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/ 

// Your description goes here... 

#include "Riostream.h" 

#include "RooDoubleCB.h" 
#include "RooAbsReal.h" 
#include "RooAbsCategory.h" 
#include <math.h> 
#include "TMath.h" 

ClassImp(RooDoubleCB) 

 RooDoubleCB::RooDoubleCB(const char *name, const char *title, 
                        RooAbsReal& _x,
                        RooAbsReal& _mean,
                        RooAbsReal& _sigma,
                        RooAbsReal& _alpha1,
                        RooAbsReal& _n1,
                        RooAbsReal& _alpha2,
                        RooAbsReal& _n2) :
   RooAbsPdf(name,title), 
   x("x","x",this,_x),
   mean("mean","mean",this,_mean),
   sigma("sigma","sigma",this,_sigma),
   alpha1("alpha1","alpha1",this,_alpha1),
   n1("n1","n1",this,_n1),
   alpha2("alpha2","alpha2",this,_alpha2),
   n2("n2","n2",this,_n2)
 { 
 } 


 RooAbsPdf* RooDoubleCB::makePdf() 
 { 

 RooArgList *cbs = new RooArgList();
 RooArgList *coeffs = new RooArgList();

 } 



