/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNComposerExtensionIcon, NSURL;

@interface MNComposerTabBarItem : FBValueObject <NSCopying> {

	NSString* _extensionIdentifier;
	int _category;
	MNComposerExtensionIcon* _icon;
	NSString* _name;
	NSString* _shortDescription;
	NSURL* _promotionImageURL;
	NSString* _accessibilityIdentifier;

}

@property (nonatomic,copy,readonly) NSString * extensionIdentifier;                  //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (nonatomic,readonly) int category;                                         //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) MNComposerExtensionIcon * icon;                  //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortDescription;                     //@synthesize shortDescription=_shortDescription - In the implementation block
@property (nonatomic,copy,readonly) NSURL * promotionImageURL;                       //@synthesize promotionImageURL=_promotionImageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityIdentifier;              //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
-(id)initWithExtensionIdentifier:(id)arg1 category:(int)arg2 icon:(id)arg3 name:(id)arg4 shortDescription:(id)arg5 promotionImageURL:(id)arg6 accessibilityIdentifier:(id)arg7 ;
-(NSURL *)promotionImageURL;
-(NSString *)name;
-(int)category;
-(NSString *)accessibilityIdentifier;
-(NSString *)shortDescription;
-(MNComposerExtensionIcon *)icon;
-(NSString *)extensionIdentifier;
@end

