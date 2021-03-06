/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@class NSObject<WFPINEntryViewControllerProtocol>;

@interface WFRemotePINEntryViewController : _UIRemoteViewController <WFPINEntryViewControllerProtocol> {
    NSObject<WFPINEntryViewControllerProtocol> *_delegate;
}

@property NSObject<WFPINEntryViewControllerProtocol> * delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)userEnteredCorrectPIN;
- (void)setPageTitle:(id)arg1;
- (void)userDidCancel;
- (void)setDelegate:(id)arg1;
- (void)setURL:(id)arg1;
- (id)delegate;
- (void)dealloc;

@end
