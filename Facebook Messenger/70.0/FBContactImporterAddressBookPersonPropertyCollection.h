/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface FBContactImporterAddressBookPersonPropertyCollection : NSObject {

	NSMutableArray* _propertyCollection;
	Class _propertyClass;

}
-(id)asStrings;
-(void)_initFromABRecord:(void*)arg1 propertyID:(int)arg2 ;
-(id)initWithABRecord:(void*)arg1 propertyID:(int)arg2 propertyClass:(Class)arg3 ;
-(void)enumeratePropertyUsingBlock:(/*^block*/id)arg1 ;
-(unsigned)count;
-(id)description;
@end

