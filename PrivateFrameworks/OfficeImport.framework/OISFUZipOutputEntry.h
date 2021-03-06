/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface OISFUZipOutputEntry : NSObject  {
    NSString *name;
    unsigned long long utf8NameLength;
    boolisCompressed;
    boolisEncrypted;
    unsigned int time;
    unsigned long long compressedSize;
    unsigned long long uncompressedSize;
    unsigned long long offset;
    unsigned long long compressedDataOffset;
    unsigned int crc;
    boolisWrittenDirectlyToFile;
    boolis64Bit;
}


- (long long)compareByOffset:(id)arg1;
- (void)dealloc;
- (id)description;

@end
