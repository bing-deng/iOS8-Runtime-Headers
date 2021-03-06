/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSDictionary;

@interface ISUserNotification : NSObject  {
    long long _allowedRetryCount;
    long long _currentRetryCount;
    NSDictionary *_dictionary;
    unsigned long long _optionFlags;
    NSDictionary *_userInfo;
}

@property(readonly) NSDictionary * dictionary;
@property(readonly) unsigned long long optionFlags;
@property long long allowedRetryCount;
@property long long currentRetryCount;
@property(retain) NSDictionary * userInfo;


- (long long)allowedRetryCount;
- (void)setAllowedRetryCount:(long long)arg1;
- (unsigned long long)optionFlags;
- (id)initWithDictionary:(id)arg1 options:(unsigned long long)arg2;
- (void)setCurrentRetryCount:(long long)arg1;
- (long long)currentRetryCount;
- (struct __CFUserNotification { }*)copyUserNotification;
- (void)setUserInfo:(id)arg1;
- (id)dictionary;
- (id)init;
- (id)userInfo;
- (void)dealloc;

@end
