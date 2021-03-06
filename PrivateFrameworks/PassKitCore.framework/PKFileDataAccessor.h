/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSObject<OS_dispatch_queue>, NSURL, PKRemoteAssetManager;

@interface PKFileDataAccessor : PKDataAccessor  {
    PKRemoteAssetManager *_remoteAssetManager;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSURL *_fileURL;
}

@property(readonly) NSObject<OS_dispatch_queue> * processingQueue;
@property(retain,readonly) NSURL * fileURL;


- (id)displayProfileOfType:(long long)arg1;
- (id)remoteAssetManager;
- (bool)remoteAssetsDownloaded;
- (id)serializedFileWrapper;
- (id)manifestHash;
- (id)resourceValueForKey:(id)arg1;
- (void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(bool)arg5 withCompletion:(id)arg6;
- (void)contentWithCompletion:(id)arg1;
- (void)dictionaryWithCompletion:(id)arg1;
- (void)revocationStatusWithCompletion:(id)arg1;
- (id)initWithFileURL:(id)arg1 error:(id*)arg2;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(id)arg3;
- (id)processingQueue;
- (id)initWithFileURL:(id)arg1 error:(id*)arg2 processingQueue:(id)arg3;
- (id)archiveData;
- (id)bundle;
- (id)fileURL;
- (void)dealloc;

@end
