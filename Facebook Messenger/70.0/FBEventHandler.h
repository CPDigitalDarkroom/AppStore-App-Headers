/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@interface FBEventHandler : NSObject {

	id<NSObject> _target;
	SEL _selectorToPerformOnEvent;

}

@property (nonatomic,__weak,readonly) id<NSObject> target;                //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selectorToPerformOnEvent;              //@synthesize selectorToPerformOnEvent=_selectorToPerformOnEvent - In the implementation block
-(char)isEqualToEventHandler:(id)arg1 ;
-(SEL)selectorToPerformOnEvent;
-(id)initWithTarget:(id)arg1 selectorToPerformOnEvent:(SEL)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id<NSObject>)target;
@end

