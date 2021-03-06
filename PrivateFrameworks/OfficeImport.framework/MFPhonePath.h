/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OITSDBezierPath;

@interface MFPhonePath : MFPath  {
    OITSDBezierPath *m_path;
    int m_state;
}


- (id)getBezierPath;
- (void)appendBezierPath:(id)arg1 dc:(id)arg2;
- (id)initWithPath:(id)arg1 state:(int)arg2;
- (int)fill:(id)arg1;
- (int)widen:(id)arg1;
- (int)closeFigure;
- (int)flatten;
- (int)stroke:(id)arg1;
- (bool)isOpen;
- (int)begin;
- (id)init;
- (int)state;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)end;
- (struct CGPoint { double x1; double x2; })currentPoint;
- (int)abort;

@end
