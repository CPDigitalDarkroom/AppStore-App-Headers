/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTTableViewCell.h>
#import <Spotify/SPTQueueSelectableTableViewCell.h>

@protocol SPTQueueTrack, SPTQueueTableViewCellDelegate;
@class UIImage, UIView, UIButton, NSString;

@interface SPTQueueTableViewCell : SPTTableViewCell <SPTQueueSelectableTableViewCell> {

	UIImage* _selectorImage;
	UIImage* _selectedImage;
	UIView* _separatorView;
	char _trackSelected;
	char _selectorHidden;
	char _separatorLineHidden;
	char _dragging;
	id<SPTQueueTrack> _track;
	id<SPTQueueTableViewCellDelegate> _delegate;
	UIButton* _selector;

}

@property (nonatomic,readonly) UIButton * selector;                                              //@synthesize selector=_selector - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<SPTQueueTrack> track;                                            //@synthesize track=_track - In the implementation block
@property (assign,nonatomic,__weak) id<SPTQueueTableViewCellDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isTrackSelected,nonatomic) char trackSelected;                          //@synthesize trackSelected=_trackSelected - In the implementation block
@property (assign,getter=isSelectorHidden,nonatomic) char selectorHidden;                        //@synthesize selectorHidden=_selectorHidden - In the implementation block
@property (assign,getter=isSeparatorLineHidden,nonatomic) char separatorLineHidden;              //@synthesize separatorLineHidden=_separatorLineHidden - In the implementation block
@property (assign,getter=isDragging,nonatomic) char dragging;                                    //@synthesize dragging=_dragging - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * placeholderImage; 
-(void)setSelectorHidden:(char)arg1 ;
-(void)setDragging:(char)arg1 ;
-(char)isTrackSelected;
-(void)setTrackSelected:(char)arg1 ;
-(char)isSelectorHidden;
-(char)isSeparatorLineHidden;
-(void)setSeparatorLineHidden:(char)arg1 ;
-(id<SPTQueueTrack>)track;
-(void)setDelegate:(id<SPTQueueTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(char)isDragging;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<SPTQueueTableViewCellDelegate>)delegate;
-(UIButton *)selector;
-(void)prepareForReuse;
-(void)touchUpInside:(id)arg1 ;
-(void)setTrack:(id<SPTQueueTrack>)arg1 ;
@end

