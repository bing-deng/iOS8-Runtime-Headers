/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, MPMediaQuery;

@interface MPQueryPlaybackContext : MPPlaybackContext  {
    bool_shouldRestartPlaybackIfQueueChanges;
    bool_shouldStartPlayback;
    NSArray *_prefixMediaItems;
    MPMediaQuery *_query;
    unsigned long long _startIndex;
}

@property(copy) NSArray * prefixMediaItems;
@property(readonly) MPMediaQuery * query;
@property bool shouldRestartPlaybackIfQueueChanges;
@property bool shouldStartPlayback;
@property unsigned long long startIndex;


- (id)initWithQuery:(id)arg1;
- (void)setStartIndex:(unsigned long long)arg1;
- (unsigned long long)startIndex;
- (void)setShouldStartPlayback:(bool)arg1;
- (bool)shouldStartPlayback;
- (void)setShouldRestartPlaybackIfQueueChanges:(bool)arg1;
- (bool)shouldRestartPlaybackIfQueueChanges;
- (void)setPrefixMediaItems:(id)arg1;
- (id)prefixMediaItems;
- (id)query;
- (void).cxx_destruct;

@end
