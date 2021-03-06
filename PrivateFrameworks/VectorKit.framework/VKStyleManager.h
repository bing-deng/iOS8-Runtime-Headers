/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString, VKSharedResources, VKStylesheet, VKGenericShieldDrawStyle, VKPGlobalProperties;

@interface VKStyleManager : NSObject  {
    unsigned int _updateStamp;
    unsigned long long _mapDisplayStyle;
    unsigned long long _mapDisplayStyleVariant;
    VKSharedResources *_sharedResources;
    VKStylesheet *_stylesheet;
    long long _mapMode;
    bool_canSelectIcons;
    float _blendingFactor;
    unsigned long long _connectedVariant;
    VKGenericShieldDrawStyle *_defaultGenericShieldStyle;
    struct unordered_map<StyleKey, std::__1::weak_ptr<md::StyleQuery>, std::__1::hash<StyleKey>, std::__1::equal_to<StyleKey>, std::__1::allocator<std::__1::pair<const StyleKey, std::__1::weak_ptr<md::StyleQuery> > > > { 
        struct __hash_table<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, std::__1::__unordered_map_hasher<StyleKey, std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, std::__1::hash<StyleKey>, true>, std::__1::__unordered_map_equal<StyleKey, std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, std::__1::equal_to<StyleKey>, true>, std::__1::allocator<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> > > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, void *> *> > > { 
                    struct __hash_node<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, void *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, void *> *> { 
                    struct __hash_node<std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<StyleKey, std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, std::__1::hash<StyleKey>, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<StyleKey, std::__1::__hash_value_type<StyleKey, std::__1::weak_ptr<md::StyleQuery> >, std::__1::equal_to<StyleKey>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    } _styleQueries;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    } _styleQueryCreationLock;
    long long _targetDisplay;
}

@property(readonly) NSString * sheetName;
@property(readonly) bool isDevResource;
@property(readonly) VKPGlobalProperties * styleGlobalProperties;
@property(readonly) bool supportsNightMode;
@property(readonly) unsigned int updateStamp;
@property float blendingFactor;
@property unsigned long long mapDisplayStyle;
@property unsigned long long mapDisplayStyleVariant;
@property(readonly) unsigned long long activeMapDisplayStyle;
@property(readonly) long long targetDisplay;
@property long long mapMode;
@property(readonly) VKGenericShieldDrawStyle * defaultGenericShieldStyle;
@property bool canSelectIcons;


- (unsigned int)updateStamp;
- (bool)canSelectIcons;
- (long long)mapMode;
- (unsigned long long)activeMapDisplayStyle;
- (id)defaultGenericShieldStyle;
- (float*)blendingFactorPointer;
- (float)shieldBrightnessForDisplayStyle:(unsigned long long)arg1;
- (float)shieldBrightnessForVectorType:(long long)arg1;
- (struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; })styleQueryForFeatureAttributes:(id)arg1;
- (id)stylesheet;
- (void)prepareStyleVariantsForMapDisplayStyle:(unsigned long long)arg1;
- (long long)rasterPolygonChangeoverZ;
- (float)_nightShieldBrightnessForVectorType:(long long)arg1;
- (struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; })styleQueryForFeatureAttributes:(id)arg1 vectorType:(const long long*)arg2 locale:(id)arg3 selectionState:(bool)arg4;
- (struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; })styleQueryForFeatureAttributes:(id)arg1 vectorType:(long long)arg2;
- (unsigned long long)mapDisplayStyleVariant;
- (void)setCanSelectIcons:(bool)arg1;
- (void)setMapDisplayStyleVariant:(unsigned long long)arg1;
- (id)styleGlobalProperties;
- (id)initWithName:(id)arg1 scale:(float)arg2 ppi:(float)arg3 targetDisplay:(long long)arg4 sharedResources:(id)arg5;
- (void)setMapDisplayStyle:(unsigned long long)arg1;
- (bool)supportsMapDisplayStyle:(unsigned long long)arg1;
- (unsigned long long)mapDisplayStyle;
- (void)setBlendingFactor:(float)arg1;
- (float)blendingFactor;
- (bool)supportsNightMode;
- (long long)targetDisplay;
- (bool)isDevResource;
- (id)sheetName;
- (void)setMapMode:(long long)arg1;
- (void)clearCaches;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
