/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@interface FBObserverTokenWrapper : NSObject {

	unique_ptr<facebook::mobile::xplat::executor::ObserverToken, std::__1::default_delete<facebook::mobile::xplat::executor::ObserverToken> >* _token;

}
-(id)initWithToken:(unique_ptr<facebook::mobile::xplat::executor::ObserverToken, std::__1::default_delete<facebook::mobile::xplat::executor::ObserverToken> >*)arg1 ;
-(void)remove;
@end

