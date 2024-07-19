//----------------------------------------------------------------------------
//  This file is automatically generated, do not modify.      
//----------------------------------------------------------------------------



using System;
using System.Runtime.InteropServices;
using Emgu.CV;
using Emgu.CV.Structure;
using Emgu.Util;

namespace Emgu.CV.Saliency
{
   public static partial class SaliencyInvoke
   {

     [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)] 
     internal static extern int cveObjectnessBINGGetW(IntPtr obj);
     [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
     internal static extern void cveObjectnessBINGSetW(
        IntPtr obj,  
        int val);
     
     [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)] 
     internal static extern int cveObjectnessBINGGetNSS(IntPtr obj);
     [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
     internal static extern void cveObjectnessBINGSetNSS(
        IntPtr obj,  
        int val);
     
   }

   public partial class ObjectnessBING
   {

     /// <summary>
     /// W
     /// </summary>
     public int W
     {
        get { return SaliencyInvoke.cveObjectnessBINGGetW(_ptr); } 
        set { SaliencyInvoke.cveObjectnessBINGSetW(_ptr, value); }
     }
     
     /// <summary>
     /// NSS
     /// </summary>
     public int NSS
     {
        get { return SaliencyInvoke.cveObjectnessBINGGetNSS(_ptr); } 
        set { SaliencyInvoke.cveObjectnessBINGSetNSS(_ptr, value); }
     }
     
   }
}
