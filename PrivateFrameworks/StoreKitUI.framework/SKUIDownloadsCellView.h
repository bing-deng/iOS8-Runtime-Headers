/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSAttributedString, NSString, UIImage, UISlider, UIImageView, UIButton, UILabel;

@interface SKUIDownloadsCellView : UIView  {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_imageView;
    UIButton *_button;
    UISlider *_progressSlider;
    NSAttributedString *_attributedTitle;
    NSString *_subtitle;
    long long _buttonType;
    bool_isPad;
}

@property(retain) NSAttributedString * attributedTitle;
@property(retain) NSString * subtitle;
@property(retain) UIImage * image;
@property double progress;
@property long long buttonType;
@property(readonly) UIButton * button;
@property bool isPad;


- (void)setIsPad:(bool)arg1;
- (void)setButtonType:(long long)arg1;
- (bool)isPad;
- (void)setBackgroundColor:(id)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (id)init;
- (void).cxx_destruct;
- (void)setProgress:(double)arg1;
- (double)progress;
- (long long)buttonType;
- (id)attributedTitle;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;
- (void)setAttributedTitle:(id)arg1;
- (void)layoutSubviews;
- (id)button;

@end
