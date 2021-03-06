/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKGameInternal, NSString, NSDictionary, GKStoreItemInternal, NSNumber;

@interface GKGame : NSObject <NSCoding, NSSecureCoding> {
    GKGameInternal *_internal;
    long long _environment;
}

@property(retain) NSString * reason;
@property(retain) NSString * engineID;
@property(readonly) bool isGameRecommendation;
@property(retain) GKGameInternal * internal;
@property(getter=isPrerendered) bool prerendered;
@property long long environment;
@property(readonly) NSDictionary * gameDescriptor;
@property(readonly) NSNumber * adamID;
@property(readonly) NSNumber * externalVersion;
@property(readonly) NSString * bundleIdentifier;
@property(readonly) NSString * bundleVersion;
@property(readonly) NSString * cacheKey;
@property unsigned char platform;
@property(readonly) NSString * name;
@property(readonly) NSString * defaultCategory;
@property(retain) GKStoreItemInternal * storeItem;
@property(readonly) struct GKGameInfo { boolx1; boolx2; boolx3; boolx4; boolx5; boolx6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; } gameInfo;
@property(readonly) bool supportsMultiplayer;
@property(readonly) bool supportsTurnBasedMultiplayer;
@property(getter=isInstalled,readonly) bool installedGame;
@property(getter=isDownloading,readonly) bool downloading;

+ (bool)isPreferences;
+ (void)markGameRecommendationsViewed:(id)arg1 complete:(id)arg2;
+ (void)markGameRecommendationsDisplayed:(id)arg1 complete:(id)arg2;
+ (void)updateGames:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadTopGamesWithCompletionHandler:(id)arg1;
+ (void)loadGamesWithBundleIDs:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)setCurrentGameFromInternal:(id)arg1 serverEnvironment:(long long)arg2;
+ (id)currentGameIncludingGameCenter:(bool)arg1;
+ (bool)isGameCenter;
+ (id)currentGame;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)supportsSecureCoding;
+ (void)removeHistoryForGameWithBundleIdentifier:(id)arg1 completionHandler:(id)arg2;
+ (void)preloadIconsForGames:(id)arg1 style:(long long)arg2 handler:(id)arg3;
+ (struct CGSize { double x1; double x2; })serverImageSizeForIconStyle:(long long)arg1;
+ (void)launchAppStoreWithGameCenterGames;
+ (void)gameCenterGamePurchasedWithBundleIdentifier:(id)arg1;

- (void)loadTellAFriendMessageWithCompletionHandler:(id)arg1;
- (bool)isGameRecommendation;
- (void)getFriendPlayersForAchievement:(id)arg1 handler:(id)arg2;
- (void)getFriendPlayersForLeaderboard:(id)arg1 handler:(id)arg2;
- (void)getFriendPlayersIncludingCompatibleGames:(bool)arg1 handler:(id)arg2;
- (void)submitRating:(float)arg1 withCompletionHandler:(id)arg2;
- (void)loadGameRatingWithCompletionHandler:(id)arg1;
- (bool)isStoreItemUnexpired;
- (struct GKGameInfo { boolx1; boolx2; boolx3; boolx4; boolx5; boolx6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; })gameInfo;
- (id)gameDescriptor;
- (id)internal;
- (void)setInternal:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (bool)isGameCenter;
- (bool)isDownloading;
- (bool)isInstalled;
- (long long)environment;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setEnvironment:(long long)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)cacheKey;
- (id)_gkSharingInfo;
- (id)fetchSharingInfo;
- (void)_gkSetSharingInfo:(id)arg1;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerSubject:(id)arg1;
- (long long)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (void)removeGameWithCompletionHandler:(id)arg1;
- (id)URLStringForImageWithShineIfNeeded;
- (id)cachedIconForStyle:(long long)arg1;
- (id)iconForStyle:(long long)arg1;
- (void)uninstallApplicationWithBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2;
- (id)imageSourceForIconStyle:(long long)arg1;
- (id)_imageURLForIconStyle:(long long)arg1;
- (id)macBrushForIconStyle:(long long)arg1;
- (id)imageSourceForiOSIconStyle:(long long)arg1;
- (id)loadIconForStyle:(long long)arg1 withCompletionHandler:(id)arg2;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)presentStoreSheetFromViewController:(id)arg1 context:(id)arg2 completionHandler:(id)arg3;

@end
