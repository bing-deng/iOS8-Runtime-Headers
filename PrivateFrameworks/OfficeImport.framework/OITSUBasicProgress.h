/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OITSUBasicProgressStorage;

@interface OITSUBasicProgress : OITSUProgress  {
    OITSUBasicProgressStorage *mStorage;
}

@property double value;
@property(getter=isIndeterminate) bool indeterminate;


- (id)initWithMaxValue:(double)arg1;
- (double)maxValue;
- (double)value;
- (void)setValue:(double)arg1;
- (id)init;
- (void)dealloc;
- (bool)isIndeterminate;
- (void)setIndeterminate:(bool)arg1;

@end
