/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@class NSDate, NSString;

@interface ZZArchiveEntry : NSObject

@property (nonatomic,readonly) char compressed; 
@property (nonatomic,readonly) char encrypted; 
@property (nonatomic,readonly) NSDate * lastModified; 
@property (nonatomic,readonly) unsigned crc32; 
@property (nonatomic,readonly) unsigned compressedSize; 
@property (nonatomic,readonly) unsigned uncompressedSize; 
@property (nonatomic,readonly) unsigned short fileMode; 
@property (nonatomic,readonly) NSString * fileName; 
+(id)archiveEntryWithFileName:(id)arg1 fileMode:(unsigned short)arg2 lastModified:(id)arg3 compressionLevel:(int)arg4 dataBlock:(/*^block*/id)arg5 streamBlock:(/*^block*/id)arg6 dataConsumerBlock:(/*^block*/id)arg7 ;
+(id)archiveEntryWithFileName:(id)arg1 compress:(char)arg2 dataBlock:(/*^block*/id)arg3 ;
+(id)archiveEntryWithFileName:(id)arg1 compress:(char)arg2 streamBlock:(/*^block*/id)arg3 ;
+(id)archiveEntryWithFileName:(id)arg1 compress:(char)arg2 dataConsumerBlock:(/*^block*/id)arg3 ;
+(id)archiveEntryWithDirectoryName:(id)arg1 ;
-(id)newDataWithError:(id*)arg1 ;
-(unsigned short)fileMode;
-(id)newStreamWithError:(id*)arg1 ;
-(id)newWriterCanSkipLocalFile:(char)arg1 ;
-(id)newStreamWithPassword:(id)arg1 error:(id*)arg2 ;
-(id)newDataWithPassword:(id)arg1 error:(id*)arg2 ;
-(CGDataProviderRef)newDataProviderWithPassword:(id)arg1 error:(id*)arg2 ;
-(CGDataProviderRef)newDataProviderWithError:(id*)arg1 ;
-(unsigned)uncompressedSize;
-(char)encrypted;
-(char)compressed;
-(char)check:(id*)arg1 ;
-(NSString *)fileName;
-(unsigned)crc32;
-(unsigned)compressedSize;
-(NSDate *)lastModified;
@end

