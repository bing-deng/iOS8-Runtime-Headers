/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@class NSInputStream;

@interface PBMessageStreamReader : NSObject  {
    NSInputStream *_stream;
    Class _classOfNextMessage;
    unsigned long long _position;
}

@property Class classOfNextMessage;
@property(readonly) unsigned long long position;


- (id)nextMessage;
- (void)setClassOfNextMessage:(Class)arg1;
- (Class)classOfNextMessage;
- (void)dealloc;
- (unsigned long long)position;
- (id)initWithStream:(id)arg1;

@end
