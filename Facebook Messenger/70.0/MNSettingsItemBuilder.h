/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSAttributedString, UIImage, UIColor;

@interface MNSettingsItemBuilder : NSObject {

	NSString* _title;
	NSString* _subtitle;
	NSAttributedString* _attributedSubtitle;
	UIImage* _icon;
	int _identifier;
	NSString* _accessibilityIdentifier;
	char _isOn;
	char _enabled;
	UIColor* _badgeColor;
	unsigned _settingsItemType;
	int _settingsItemActionType;

}
+(id)settingsItem;
+(id)settingsItemFromExistingSettingsItem:(id)arg1 ;
-(id)withSubtitle:(id)arg1 ;
-(id)withAttributedSubtitle:(id)arg1 ;
-(id)withIcon:(id)arg1 ;
-(id)withIdentifier:(int)arg1 ;
-(id)withAccessibilityIdentifier:(id)arg1 ;
-(id)withIsOn:(char)arg1 ;
-(id)withEnabled:(char)arg1 ;
-(id)withBadgeColor:(id)arg1 ;
-(id)withSettingsItemType:(unsigned)arg1 ;
-(id)withSettingsItemActionType:(int)arg1 ;
-(id)withTitle:(id)arg1 ;
-(id)build;
@end

