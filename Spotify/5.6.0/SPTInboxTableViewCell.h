/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <Spotify/SPTThemableView.h>

@protocol SPTThemableViewLayoutDelegate;
@class SPTInboxItem, UILabel, SPTOfflineSyncStatusView, NSString;

@interface SPTInboxTableViewCell : UITableViewCell <SPTThemableView> {

	char _active;
	id<SPTThemableViewLayoutDelegate> _layoutDelegate;
	SPTInboxItem* _item;
	UILabel* _dateLabel;
	SPTOfflineSyncStatusView* _offlineSyncStatusView;

}

@property (assign,getter=isActive,nonatomic) char active;                                          //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) SPTInboxItem * item;                                                  //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) UILabel * dateLabel;                                                  //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,retain) SPTOfflineSyncStatusView * offlineSyncStatusView;                     //@synthesize offlineSyncStatusView=_offlineSyncStatusView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SPTThemableViewLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
+(float)heightWithItem:(id)arg1 inTableView:(id)arg2 ;
-(void)applyThemeLayout;
-(SPTOfflineSyncStatusView *)offlineSyncStatusView;
-(void)setOfflineSyncStatusView:(SPTOfflineSyncStatusView *)arg1 ;
-(id<SPTThemableViewLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<SPTThemableViewLayoutDelegate>)arg1 ;
-(void)setDateLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(char)isActive;
-(SPTInboxItem *)item;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)setActive:(char)arg1 ;
-(void)setAccessoryView:(id)arg1 ;
-(void)setItem:(SPTInboxItem *)arg1 ;
-(UILabel *)dateLabel;
@end

