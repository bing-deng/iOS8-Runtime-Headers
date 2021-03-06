/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSURL, AVPropertyStorage, NSDate, AVAudioMix, AVAsset, AVCustomVideoCompositorSession, NSMutableArray, NSDictionary, AVPlayerConnection, AVPlayerItem, AVVideoComposition, NSString, <AVPlayerItemDelegate>, NSArray, NSObject<OS_dispatch_queue>, AVWeakReference, NSError;

@interface AVPlayerItemInternal : NSObject  {
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    AVWeakReference *weakReference;
    NSObject<OS_dispatch_queue> *figConfigurationQueue;
    struct OpaqueVTPixelBufferAttributesMediator { } *pixelBufferAttributeMediator;
    struct OpaqueCMTimebase { } *proxyTimebase;
    boolisCurrentPlayerItem;
    NSArray *cachedTracks;
    NSMutableArray *syncLayers;
    NSArray *itemOutputs;
    NSMutableArray *itemVideoOutputs;
    NSMutableDictionary *itemLegibleOutputsForKeys;
    NSMutableDictionary *itemMetadataOutputsForKeys;
    boolsuppressesVideoLayers;
    struct OpaqueCMTimebase { } *figTimebase;
    struct OpaqueFigPlaybackItem { } *figPlaybackItem;
    AVPlayerItem *previousItem;
    AVPlayerItem *nextItem;
    struct OpaqueFigCPEProtector { } *figCPEProtector;
    <AVPlayerItemDelegate> *delegate;
    AVWeakReference *playerReference;
    AVPlayerConnection *playerConnection;
    NSObject<OS_dispatch_queue> *stateDispatchQueue;
    AVPropertyStorage *propertyStorage;
    long long status;
    NSError *error;
    NSURL *URL;
    AVAsset *asset;
    NSArray *automaticallyLoadedAssetKeys;
    AVAsset *assetWithFigPlaybackItem;
    NSArray *trackIDsForAssetWithFigPlaybackItem;
    NSArray *timedMetadata;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } initialTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } initialToleranceBefore;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } initialToleranceAfter;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } forwardPlaybackEndTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } reversePlaybackEndTime;
    NSDate *initialDate;
    NSDate *initialEstimatedDate;
    boolinitialLimitReadAhead;
    boolallowsExtendedReadAhead;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } maximumTrailingBufferDuration;
    long long initialPlaybackLikelyToKeepUpTrigger;
    boolinitialAlwaysMonitorsPlayability;
    boolinitialWillNeverSeekBackwardsHint;
    boolinitialContinuesPlayingDuringPrerollForSeek;
    boolinitialContinuesPlayingDuringPrerollForRateChange;
    boolusesIFrameOnlyPlaybackForHighRateScaledEdits;
    boolusesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } minimumIntervalForIFrameOnlyPlayback;
    boolminimumIntervalForIFrameOnlyPlaybackWasSet;
    float speedThresholdForIFrameOnlyPlayback;
    boolspeedThresholdForIFrameOnlyPlaybackWasSet;
    struct __CFString { } *initialFigTimePitchAlgorithm;
    boolsavesDownloadedDataToDiskWhenDone;
    boolnonForcedSubtitlesEnabled;
    boolnetworkUsuallyExceedsMaxBitRate;
    boolallowProgressiveSwitchUp;
    double preferredPeakBitRate;
    AVAudioMix *audioMix;
    AVVideoComposition *videoComposition;
    AVWeakReference *clientsOriginalVideoComposition;
    void *figVideoCompositor;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    boolseekingWaitsForVideoCompositionRendering;
    NSArray *textStyleRules;
    NSDictionary *gaplessInfo;
    long long initialVariantIndex;
    NSDictionary *audibleDRMInfo;
    NSDictionary *rampInOutInfo;
    float soundCheckVolumeNormalization;
    float volumeAdjustment;
    NSMutableArray *handlersToCallWhenReadyForEnqueueing;
    NSMutableDictionary *mediaOptionsSelectedByClient;
    boolhaveInitialSamples;
    boolhaveCPEProtector;
    booldidSetAssetToAssetWithFigPlaybackItem;
    booldidBecomeReadyForBasicInspection;
    booldidBecomeReadyForInspectionOfMediaSelectionOptions;
    booldidBecomeReadyForInspectionOfTracks;
    booldidBecomeReadyForInspectionOfPresentationSize;
    booldidBecomeReadyForInspectionOfDuration;
    booldidInformObserversAboutAvailabilityOfTracks;
    booldidFireKVOForAssetForNonStreamingItem;
    boolwasInitializedWithURL;
    boolneedTimedMetadataNotification;
    boolexternalSubtitlesEnabled;
    boolexternalProtectionRequested;
    boolrequiresAccessLog;
    int eqPreset;
    struct OpaqueFigSimpleMutex { } *seekIDMutex;
    unsigned int nextSeekIDToGenerate;
    int pendingSeekID;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id seekCompletionHandler;

    NSString *dataYouTubeID;
    unsigned int RTCReportingFlags;
    NSString *serviceIdentifier;
    NSString *mediaKind;
    unsigned long long restrictions;
}



@end
