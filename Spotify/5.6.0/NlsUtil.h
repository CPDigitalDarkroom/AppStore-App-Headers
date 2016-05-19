/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NlsUtil : NSObject
+(id)createNUID:(id)arg1 ;
+(id)getAdId;
+(id)clearDict:(id)arg1 ;
+(char)isNullOrEmpty:(id)arg1 ;
+(id)uriEncode:(id)arg1 ;
+(id)sha256:(id)arg1 ;
+(char)isSystemVersionLessThan:(id)arg1 ;
+(char)isSystemVersionAtLeast:(id)arg1 ;
+(float)systemVolume;
+(id)getTimeZone;
+(double)getServerTimeStamp:(id)arg1 withBaseDeviceTime:(id)arg2 ;
+(id)getCurrentTimeZone;
+(id)getXORString:(id)arg1 operand:(unsigned char)arg2 mask:(unsigned char)arg3 decode:(BOOL)arg4 ;
+(id)checkFilters:(id)arg1 forDict:(id)arg2 withServiceDict:(id)arg3 withCidNull:(id)arg4 useImmed:(BOOL)arg5 ;
+(double)getServerTimeStampFromTimestamp:(double)arg1 strServerBaseTime:(id)arg2 withBaseDeviceTime:(id)arg3 ;
+(id)systemVersion;
+(double)getTimeStamp;
@end

