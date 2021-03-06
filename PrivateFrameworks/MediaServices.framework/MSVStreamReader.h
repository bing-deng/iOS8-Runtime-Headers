/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSObject<OS_dispatch_queue>, NSString, NSInputStream;

@interface MSVStreamReader : NSObject <NSStreamDelegate> {
    bool_closeOnStop;
    struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; } *_zstreamp;
    bool_compress;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _didReadDataBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _didFinishReadingBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _didEncounterErrorBlock;

    unsigned long long _maximumBufferSize;
    NSInputStream *_stream;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(copy) id didReadDataBlock;
@property(copy) id didFinishReadingBlock;
@property(copy) id didEncounterErrorBlock;
@property unsigned long long maximumBufferSize;
@property(getter=shouldCompress) bool compress;
@property(retain) NSInputStream * stream;
@property(retain) NSObject<OS_dispatch_queue> * queue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setStream:(id)arg1;
- (id)stream;
- (void)setCompress:(bool)arg1;
- (void)setMaximumBufferSize:(unsigned long long)arg1;
- (unsigned long long)maximumBufferSize;
- (id)readAllDataWithError:(id*)arg1;
- (id)initWithInputStream:(id)arg1 queue:(id)arg2;
- (id)_compressedDataForData:(id)arg1;
- (bool)shouldCompress;
- (void)setDidReadDataBlock:(id)arg1;
- (id)didReadDataBlock;
- (void)setDidEncounterErrorBlock:(id)arg1;
- (id)didEncounterErrorBlock;
- (void)setDidFinishReadingBlock:(id)arg1;
- (id)didFinishReadingBlock;
- (void)readAllDataWithCompletion:(id)arg1;
- (void)stop;
- (void)setQueue:(id)arg1;
- (id)queue;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)start;
- (void)dealloc;
- (void).cxx_destruct;

@end
