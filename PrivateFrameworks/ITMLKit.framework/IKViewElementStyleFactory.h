/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class NSMutableDictionary, IKStyleFactory;

@interface IKViewElementStyleFactory : NSObject  {
    IKStyleFactory *_styleFactory;
    NSMutableDictionary *_styleByITMLID;
}

@property(retain,readonly) IKStyleFactory * styleFactory;
@property(retain,readonly) NSMutableDictionary * styleByITMLID;


- (id)styleByITMLID;
- (id)styleForElement:(id)arg1 classSelector:(id)arg2 inlineStyle:(id)arg3;
- (id)styleFactory;
- (id)initWithDocumentStyles:(id)arg1;
- (void).cxx_destruct;

@end
