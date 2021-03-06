/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class _WebSafeAsyncForwarder;

@interface _WebSafeForwarder : NSObject  {
    id target;
    id defaultTarget;
    _WebSafeAsyncForwarder *asyncForwarder;
    long long asyncForwarderPred;
}


- (id)initWithTarget:(id)arg1 defaultTarget:(id)arg2;
- (void)clearTarget;
- (id)asyncForwarder;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;

@end
