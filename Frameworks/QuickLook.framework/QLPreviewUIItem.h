/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class QLPreviewThumbnailGenerator, NSString, NSURL, <QLPreviewItem>, UIImage;

@interface QLPreviewUIItem : NSObject <QLPreviewUIItem> {
    <QLPreviewItem> *_previewItem;
    QLPreviewThumbnailGenerator *_thumbnailGenerator;
    long long _index;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) NSURL * previewItemURL;
@property(readonly) NSString * previewItemTitle;
@property(readonly) UIImage * icon;
@property(readonly) long long level;
@property(readonly) long long previewItemIndex;
@property(readonly) bool isFolder;

+ (id)uiItemForPreviewItem:(id)arg1 index:(long long)arg2;
+ (id)genericIconForPreviewItem:(id)arg1;

- (bool)isFolder;
- (long long)previewItemIndex;
- (void)cancelIconUpdate;
- (void)updateIconWithSize:(struct CGSize { double x1; double x2; })arg1 completionBlock:(id)arg2;
- (id)icon;
- (long long)level;
- (void)dealloc;
- (id)previewItemTitle;
- (id)previewItemURL;

@end
