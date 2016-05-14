/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface FBVideoEdits : NSObject <NSCopying> {

	NSMutableDictionary* _data;

}
+(id)editsFromVideoAssetEdits:(id)arg1 ;
-(void)setMuteAudio:(char)arg1 ;
-(void)addTrimRange:(SCD_Struct_FB288)arg1 ;
-(void)addTrimRange:(SCD_Struct_FB288)arg1 scaleToDuration:(SCD_Struct_FB51)arg2 ;
-(id)trimRanges;
-(void)clearTrimRanges;
-(void)clearCropRectangle;
-(void)addFilterWithName:(id)arg1 withParameters:(id)arg2 ;
-(id)videoProcessorConfig;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)mutableCopy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)filters;
-(void)setCropRectangle:(CGRect)arg1 ;
-(CGRect)cropRectangle;
-(void)clearFilters;
-(char)isAudioMuted;
@end

