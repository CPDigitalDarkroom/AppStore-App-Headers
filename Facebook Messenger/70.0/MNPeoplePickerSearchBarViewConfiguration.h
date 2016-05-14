/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface MNPeoplePickerSearchBarViewConfiguration : FBValueObject <NSCopying> {

	char _forceShowStatusBarBackgroundViewForSuggestions;
	UIColor* _activeSearchBarTintColor;
	UIColor* _activeSearchBarBackgroundColor;
	UIColor* _statusBarBackgroundViewColorOverride;

}

@property (nonatomic,copy,readonly) UIColor * activeSearchBarTintColor;                          //@synthesize activeSearchBarTintColor=_activeSearchBarTintColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * activeSearchBarBackgroundColor;                    //@synthesize activeSearchBarBackgroundColor=_activeSearchBarBackgroundColor - In the implementation block
@property (nonatomic,readonly) char forceShowStatusBarBackgroundViewForSuggestions;              //@synthesize forceShowStatusBarBackgroundViewForSuggestions=_forceShowStatusBarBackgroundViewForSuggestions - In the implementation block
@property (nonatomic,copy,readonly) UIColor * statusBarBackgroundViewColorOverride;              //@synthesize statusBarBackgroundViewColorOverride=_statusBarBackgroundViewColorOverride - In the implementation block
-(id)initWithActiveSearchBarTintColor:(id)arg1 activeSearchBarBackgroundColor:(id)arg2 forceShowStatusBarBackgroundViewForSuggestions:(char)arg3 statusBarBackgroundViewColorOverride:(id)arg4 ;
-(UIColor *)activeSearchBarTintColor;
-(UIColor *)activeSearchBarBackgroundColor;
-(char)forceShowStatusBarBackgroundViewForSuggestions;
-(UIColor *)statusBarBackgroundViewColorOverride;
@end

