/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLConnectionInterface <NSObject>
@required
-(void)addConnectionListener:(id)arg1;
-(void)synchronouslyApplyStateModification:(id)arg1;
-(id)addEdgesFromConnectionPage:(id)arg1 atLocation:(id)arg2 userInfo:(id)arg3;
-(void)asynchronouslyApplyStateModification:(id)arg1;
-(void)removeConnectionListener:(id)arg1;
-(void)registerEdgeFilter:(id)arg1 withPriority:(int)arg2;
-(id)connectionState;

@end

