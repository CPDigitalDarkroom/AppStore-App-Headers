/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <TFNUI/TFNItemsTableRowAdapter.h>

@class T1StatusTableRowAdapter;

@interface T1TweetItemTableRowAdapter : TFNItemsTableRowAdapter {

	T1StatusTableRowAdapter* _statusAdapter;
	/*^block*/id _updateCellOptionsBlock;
	unsigned long long _cachedStatusOptions;

}
-(float)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(void)dataViewController:(id)arg1 didSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(char)dataViewController:(id)arg1 dismissItem:(id)arg2 atIndexPath:(id)arg3 ;
-(id)dataViewController:(id)arg1 previewingViewControllerForItem:(id)arg2 withOptions:(id)arg3 location:(CGPoint)arg4 inCell:(id)arg5 atIndexPath:(id)arg6 getSourceRect:(out CGRect*)arg7 ;
-(void)dataViewController:(id)arg1 commitPreviewingViewController:(id)arg2 forItem:(id)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5 ;
-(id)init;
@end

