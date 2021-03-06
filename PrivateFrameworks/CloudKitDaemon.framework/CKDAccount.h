/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class ACAccountType, CKDClientContext, NSString, CKDBackingAccount, ACAccountStore;

@interface CKDAccount : NSObject <CKDAccountInfoProvider> {
    bool_isUnitTestingAccount;
    bool_accountWantsPushRegistration;
    bool_isAnonymousAccount;
    bool_haveWarnedAboutServerPreferredPushEnvironment;
    ACAccountStore *_accountStore;
    ACAccountType *_acAccountType;
    CKDBackingAccount *_backingAccount;
    CKDClientContext *_context;
}

@property(readonly) NSString * accountIdentifier;
@property(readonly) bool isFakeAccount;
@property bool isUnitTestingAccount;
@property bool accountWantsPushRegistration;
@property(readonly) bool allowsCellularAccess;
@property(readonly) bool cloudKitIsEnabled;
@property(readonly) bool cloudPhotosIsEnabled;
@property(retain) ACAccountStore * accountStore;
@property(retain) ACAccountType * acAccountType;
@property(readonly) NSString * accountID;
@property(readonly) CKDBackingAccount * backingAccount;
@property CKDClientContext * context;
@property bool isAnonymousAccount;
@property bool haveWarnedAboutServerPreferredPushEnvironment;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setIsAnonymousAccount:(bool)arg1;
- (void)setAcAccountType:(id)arg1;
- (id)acAccountType;
- (id)initWithAccountID:(id)arg1 context:(id)arg2;
- (id)_urlBySettingCustomBaseURL:(id)arg1 onURL:(id)arg2;
- (void)setHaveWarnedAboutServerPreferredPushEnvironment:(bool)arg1;
- (bool)haveWarnedAboutServerPreferredPushEnvironment;
- (id)backingAccount;
- (id)_initWithContext:(id)arg1;
- (id)cloudKitAuthToken;
- (void)fetchDeviceIDUsingBackgroundSession:(bool)arg1 allowsCellularAccess:(bool)arg2 withCompletionHandler:(id)arg3;
- (void)fetchPublicURLUsingBackgroundSession:(bool)arg1 allowsCellularAccess:(bool)arg2 serverType:(long long)arg3 completionHandler:(id)arg4;
- (id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
- (void)renewMescalSessionForRequest:(id)arg1 withCompletionHandler:(id)arg2;
- (void)resetMescalSession;
- (void)fetchConfigurationUsingBackgroundSession:(bool)arg1 allowsCellularAccess:(bool)arg2 withCompletionHandler:(id)arg3;
- (void)renewAuthTokenWithCompletionHandler:(id)arg1;
- (id)enabledKeyboards;
- (id)hardwareID;
- (id)trafficContainerIdentifier;
- (id)mescalSession;
- (bool)isFakeAccount;
- (bool)cloudKitIsEnabled;
- (bool)cloudPhotosIsEnabled;
- (id)initPrimaryAccountWithContext:(id)arg1;
- (id)initFakeAccountWithEmail:(id)arg1 password:(id)arg2 context:(id)arg3;
- (id)initAnonymousAccountWithContext:(id)arg1;
- (id)serverPreferredPushEnvironment;
- (void)fetchContainerScopedUserIDUsingBackgroundSession:(bool)arg1 allowsCellularAccess:(bool)arg2 withCompletionHandler:(id)arg3;
- (bool)canAccessAccount;
- (bool)isAnonymousAccount;
- (id)applicationBundle;
- (id)dsid;
- (id)regionCode;
- (id)iCloudAuthToken;
- (bool)shouldFailAllTasks;
- (void)setAccountWantsPushRegistration:(bool)arg1;
- (void)setIsUnitTestingAccount:(bool)arg1;
- (bool)accountWantsPushRegistration;
- (bool)isUnitTestingAccount;
- (id)containerScopedUserID;
- (id)containerID;
- (id)context;
- (void)setContext:(id)arg1;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (void)noteFailedProtocolRequest;
- (void)noteFailedNetworkRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
- (id)accountStore;
- (void)setAccountStore:(id)arg1;
- (id)accountID;
- (id)accountIdentifier;
- (id)languageCode;
- (id)deviceName;
- (bool)allowsCellularAccess;
- (id)bundleID;
- (void).cxx_destruct;
- (id)description;
- (id)config;

@end
