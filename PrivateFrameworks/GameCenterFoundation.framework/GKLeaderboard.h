/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSArray, <GKLeaderboardDelegate>, GKScore, GKLeaderboardInternal, NSString;

@interface GKLeaderboard : NSObject  {
    int _loadingCount;
    int _lock;
    long long _timeScope;
    long long _playerScope;
    NSArray *_players;
    NSArray *_scores;
    GKScore *_localPlayerScore;
    <GKLeaderboardDelegate> *_weakDelegate;
    GKLeaderboardInternal *_internal;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _range;
}

@property long long timeScope;
@property long long playerScope;
@property(copy) NSString * identifier;
@property(copy,readonly) NSString * title;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property(retain) NSArray * scores;
@property(readonly) unsigned long long maxRange;
@property(retain) GKScore * localPlayerScore;
@property(getter=isLoading,readonly) bool loading;
@property(retain,readonly) NSString * groupIdentifier;
@property(retain) GKLeaderboardInternal * internal;
@property <GKLeaderboardDelegate> * delegate;
@property int loadingCount;
@property(retain,readonly) NSString * localizedTitle;
@property(readonly) long long overallRank;
@property(readonly) long long overallRankCount;
@property(readonly) long long friendRank;
@property(readonly) long long friendRankCount;
@property(retain) NSArray * players;
@property int lock;
@property(copy) NSString * category;

+ (void)setDefaultLeaderboard:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadLeaderboardWithIdentifier:(id)arg1 forGame:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(id)arg4;
+ (void)loadLeaderboardsWithCompletionHandler:(id)arg1;
+ (void)loadCategoriesWithCompletionHandler:(id)arg1;
+ (void)loadLeaderboardsForGame:(id)arg1 withPlayer:(id)arg2 withCompletionHandler:(id)arg3;
+ (void)loadLeaderboardsForGame:(id)arg1 forSet:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(id)arg4;
+ (void)loadLeaderboardsForGame:(id)arg1 withCompletionHandler:(id)arg2;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (id)localizedStringForTimeScope:(long long)arg1;

- (void)setPlayers:(id)arg1;
- (void)setLoadingCount:(int)arg1;
- (int)loadingCount;
- (id)localPlayerScore;
- (void)setPlayerScope:(long long)arg1;
- (void)loadScoresWithCompletionHandler:(id)arg1;
- (id)initWithPlayerIDs:(id)arg1;
- (void)decrementLoadingCountAtomically;
- (void)loadScoresForRequest:(id)arg1 handler:(id)arg2;
- (void)setLocalPlayerScore:(id)arg1;
- (void)setScores:(id)arg1;
- (id)scores;
- (id)scoreRequestForGame:(id)arg1;
- (void)incrementLoadingCountAtomically;
- (void)setTimeScope:(long long)arg1;
- (void)loadScoresForGame:(id)arg1 withCompletionHandler:(id)arg2;
- (id)players;
- (long long)playerScope;
- (long long)timeScope;
- (id)initWithPlayers:(id)arg1;
- (id)internal;
- (void)setInternal:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setLock:(int)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (bool)isLoading;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (int)lock;
- (id)delegate;
- (void)dealloc;
- (id)description;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)miniImageURL;
- (void)loadImageWithCompletionHandler:(id)arg1;
- (id)imageURL;

@end
