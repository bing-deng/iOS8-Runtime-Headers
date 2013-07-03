/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class ACAccount, NSString;

@interface AAAuthenticateRequest : AARequest  {
    NSString *_username;
    NSString *_password;
    NSString *_authToken;
    ACAccount *_account;
}

@property(copy) NSString * username;
@property(copy) NSString * password;
@property(copy) NSString * authToken;
@property(retain) ACAccount * account;

+ (Class)responseClass;

- (id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3;
- (id)urlCredential;
- (id)initWithUsername:(id)arg1 password:(id)arg2;
- (id)urlString;
- (id)urlRequest;
- (id)authToken;
- (void)setAuthToken:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;
- (void)setAccount:(id)arg1;
- (id)account;
- (id)password;
- (void).cxx_destruct;

@end