/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UILabel, NSMutableArray, NSAttributedString;

@interface MKPlaceAttributionCell : ABContactCell  {
    UILabel *_label;
    NSMutableArray *_scaledConstraints;
}

@property(retain) NSAttributedString * attributionString;
@property(retain) UILabel * label;
@property(retain) NSMutableArray * scaledConstraints;

+ (id)fontForLabel;
+ (double)intrinsicContentHeight;

- (id)updatedAttributionStringFromString:(id)arg1 updateColorOnly:(bool)arg2;
- (void)setAttributionString:(id)arg1;
- (id)attributionString;
- (void)setScaledConstraints:(id)arg1;
- (id)scaledConstraints;
- (void)contentSizeDidChange;
- (id)label;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setLabel:(id)arg1;
- (void)updateConstraints;
- (void)tintColorDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
