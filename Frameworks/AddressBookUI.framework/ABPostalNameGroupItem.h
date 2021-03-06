/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, CNMutableContact;

@interface ABPostalNameGroupItem : ABCardGroupItem  {
    CNMutableContact *_contact;
    SEL _setter;
    NSString *_value;
    NSString *_property;
    NSString *_placeholder;
}

@property(copy) CNMutableContact * contact;
@property SEL setter;
@property(copy) NSString * value;
@property(copy) NSString * property;
@property(copy) NSString * placeholder;


- (SEL)setter;
- (void)setSetter:(SEL)arg1;
- (void)setContact:(id)arg1;
- (id)contact;
- (void)setProperty:(id)arg1;
- (id)property;
- (id)value;
- (void)setValue:(id)arg1;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;

@end
