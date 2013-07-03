/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSSet, NSArray, SSDownloadManager;

@interface SSDownloadQueue : NSObject <SSDownloadManagerObserverPrivate> {
    BOOL _autoFinishDownloads;
    SSDownloadManager *_downloadManager;
    struct __CFSet { } *_observers;
}

@property(readonly) NSSet * downloadKinds;
@property(readonly) SSDownloadManager * downloadManager;
@property(readonly) NSArray * downloads;
@property BOOL shouldAutomaticallyFinishDownloads;
@property(getter=isUsingNetwork,readonly) BOOL usingNetwork;
@property(readonly) NSArray * placeholderDownloads;
@property(readonly) NSArray * preorders;

+ (void)setCachedArtwork:(id)arg1 forDownload:(id)arg2;
+ (void)loadArtworkForDownload:(id)arg1;
+ (void)cancelLoadArtworkForDownload:(id)arg1;
+ (id)cachedArtworkForDownload:(id)arg1;
+ (id)softwareApplicationDownloadKinds;
+ (id)mediaDownloadKinds;

- (void)setShouldAutomaticallyFinishDownloads:(BOOL)arg1;
- (BOOL)shouldAutomaticallyFinishDownloads;
- (void)_sendQueuePreOrdersChanged;
- (BOOL)startPreOrderDownload:(id)arg1;
- (void)removePlaceholderDownload:(id)arg1;
- (id)preorders;
- (id)placeholderDownloads;
- (id)downloadForItemIdentifier:(unsigned long long)arg1;
- (void)addPlaceholderDownloads:(id)arg1;
- (BOOL)addDownload:(id)arg1;
- (id)initWithDownloadManagerOptions:(id)arg1;
- (void)downloadManagerNetworkUsageDidChange:(id)arg1;
- (void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2;
- (void)_sendQueueChangedWithRemovals:(id)arg1;
- (void)_messageObserversWithFunction:(int (*)())arg1 context:(void*)arg2;
- (void)_sendQueueNetworkUsageChanged;
- (void)_handleDownloadsRemoved:(id)arg1;
- (void)_sendDownloadStatusChangedAtIndex:(int)arg1;
- (BOOL)reloadFromServer;
- (BOOL)isUsingNetwork;
- (id)downloads;
- (id)downloadKinds;
- (BOOL)canCancelDownload:(id)arg1;
- (id)_initWithDownloadManagerOptions:(id)arg1;
- (id)initWithDownloadKinds:(id)arg1;
- (void)_handleDownloadsDidChange:(id)arg1;
- (id)downloadManager;
- (BOOL)cancelDownload:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)getDownloadsUsingBlock:(id)arg1;
- (void)removeObserver:(id)arg1;

@end