/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>

@class UIView, FBSearchBar;

@interface MNSearchBarWithAccessoryView : UIView {

	UIView* _accessoryView;
	char _showsAccessoryView;
	FBSearchBar* _searchBar;

}

@property (nonatomic,readonly) FBSearchBar * searchBar;              //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,nonatomic) char showsAccessoryView;                //@synthesize showsAccessoryView=_showsAccessoryView - In the implementation block
-(id)initWithSearchBar:(id)arg1 accessoryView:(id)arg2 ;
-(void)setShowsAccessoryView:(char)arg1 ;
-(char)showsAccessoryView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBSearchBar *)searchBar;
@end

