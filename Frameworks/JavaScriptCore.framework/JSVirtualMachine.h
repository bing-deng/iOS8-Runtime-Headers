/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

@class NSMapTable;

@interface JSVirtualMachine : NSObject  {
    struct OpaqueJSContextGroup { } *m_group;
    NSMapTable *m_contextCache;
    NSMapTable *m_externalObjectGraph;
    NSMapTable *m_externalRememberedSet;
}

+ (id)virtualMachineWithContextGroupRef:(struct OpaqueJSContextGroup { }*)arg1;

- (id)externalRememberedSet;
- (id)externalObjectGraph;
- (void)addExternalRememberedObject:(id)arg1;
- (bool)isOldExternalObject:(id)arg1;
- (id)initWithContextGroupRef:(struct OpaqueJSContextGroup { }*)arg1;
- (void)removeManagedReference:(id)arg1 withOwner:(id)arg2;
- (void)addManagedReference:(id)arg1 withOwner:(id)arg2;
- (id)contextForGlobalContextRef:(struct OpaqueJSContext { }*)arg1;
- (void)addContext:(id)arg1 forGlobalContextRef:(struct OpaqueJSContext { }*)arg2;
- (id)init;
- (void)dealloc;

@end
