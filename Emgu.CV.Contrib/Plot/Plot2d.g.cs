//----------------------------------------------------------------------------
//  This file is automatically generated, do not modify.      
//----------------------------------------------------------------------------



using System;
using System.Runtime.InteropServices;
using Emgu.CV;
using Emgu.CV.Structure;
using Emgu.Util;

namespace Emgu.CV.Plot
{
   public static partial class PlotInvoke
   {

     [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
     internal static extern void cvePlot2dSetMinX(
        IntPtr obj,  
        double val);
     
     [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
     internal static extern void cvePlot2dSetMinY(
        IntPtr obj,  
        double val);
     
     [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
     internal static extern void cvePlot2dSetMaxX(
        IntPtr obj,  
        double val);
     
     [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
     internal static extern void cvePlot2dSetMaxY(
        IntPtr obj,  
        double val);
     
     [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
     internal static extern void cvePlot2dSetPlotLineWidth(
        IntPtr obj,  
        int val);
     
     [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
     internal static extern void cvePlot2dSetGridLinesNumber(
        IntPtr obj,  
        int val);
     
     [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
     internal static extern void cvePlot2dSetPointIdxToPrint(
        IntPtr obj,  
        int val);
     
     [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
     internal static extern void cvePlot2dSetInvertOrientation(
        IntPtr obj, 
        [MarshalAs(CvInvoke.BoolMarshalType)] 
        bool val);
     
     [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
     internal static extern void cvePlot2dSetShowText(
        IntPtr obj, 
        [MarshalAs(CvInvoke.BoolMarshalType)] 
        bool val);
     
     [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
     internal static extern void cvePlot2dSetShowGrid(
        IntPtr obj, 
        [MarshalAs(CvInvoke.BoolMarshalType)] 
        bool val);
     
     [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
     internal static extern void cvePlot2dSetNeedPlotLine(
        IntPtr obj, 
        [MarshalAs(CvInvoke.BoolMarshalType)] 
        bool val);
     
   }

   public partial class Plot2d
   {

     /// <summary>
     /// Min X
     /// </summary>
	 /// <param name="value">The value</param>
     public void SetMinX(double value)
     {
        PlotInvoke.cvePlot2dSetMinX(_ptr, value); 
     }
     
     /// <summary>
     /// Min Y
     /// </summary>
	 /// <param name="value">The value</param>
     public void SetMinY(double value)
     {
        PlotInvoke.cvePlot2dSetMinY(_ptr, value); 
     }
     
     /// <summary>
     /// Max X
     /// </summary>
	 /// <param name="value">The value</param>
     public void SetMaxX(double value)
     {
        PlotInvoke.cvePlot2dSetMaxX(_ptr, value); 
     }
     
     /// <summary>
     /// Max Y
     /// </summary>
	 /// <param name="value">The value</param>
     public void SetMaxY(double value)
     {
        PlotInvoke.cvePlot2dSetMaxY(_ptr, value); 
     }
     
     /// <summary>
     /// Plot line width
     /// </summary>
	 /// <param name="value">The value</param>
     public void SetPlotLineWidth(int value)
     {
        PlotInvoke.cvePlot2dSetPlotLineWidth(_ptr, value); 
     }
     
     /// <summary>
     /// Grid Lines Number
     /// </summary>
	 /// <param name="value">The value</param>
     public void SetGridLinesNumber(int value)
     {
        PlotInvoke.cvePlot2dSetGridLinesNumber(_ptr, value); 
     }
     
     /// <summary>
     /// Sets the index of a point which coordinates will be printed on the top left corner of the plot (if ShowText flag is true)
     /// </summary>
	 /// <param name="value">The value</param>
     public void SetPointIdxToPrint(int value)
     {
        PlotInvoke.cvePlot2dSetPointIdxToPrint(_ptr, value); 
     }
     
     /// <summary>
     /// Invert Orientation
     /// </summary>
	 /// <param name="value">The value</param>
     public void SetInvertOrientation(bool value)
     {
        PlotInvoke.cvePlot2dSetInvertOrientation(_ptr, value); 
     }
     
     /// <summary>
     /// Show Text
     /// </summary>
	 /// <param name="value">The value</param>
     public void SetShowText(bool value)
     {
        PlotInvoke.cvePlot2dSetShowText(_ptr, value); 
     }
     
     /// <summary>
     /// Show Grid
     /// </summary>
	 /// <param name="value">The value</param>
     public void SetShowGrid(bool value)
     {
        PlotInvoke.cvePlot2dSetShowGrid(_ptr, value); 
     }
     
     /// <summary>
     /// Need Plot Line
     /// </summary>
	 /// <param name="value">The value</param>
     public void SetNeedPlotLine(bool value)
     {
        PlotInvoke.cvePlot2dSetNeedPlotLine(_ptr, value); 
     }
     
   }
}