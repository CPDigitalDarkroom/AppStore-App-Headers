/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBFontManager, NSArray;

@interface FBFontResourceBundle : NSObject {

	char _didDestroy;
	NSString* _identifier;
	FBFontManager* _fontManager;
	NSArray* _fontResourceHandles;

}

@property (nonatomic,copy,readonly) NSArray * fontResourceHandles;              //@synthesize fontResourceHandles=_fontResourceHandles - In the implementation block
-(id)initWithFontManager:(id)arg1 fontResourceHandles:(id)arg2 identifier:(id)arg3 ;
-(void)destroyResources;
-(NSArray *)fontResourceHandles;
-(void)dealloc;
@end

