/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:29 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPTCeramicViewControllerDelegate <NSObject>
@optional
-(char)ceramicViewControllerShouldDisableVerticalScrolling:(id)arg1;
-(void)ceramicViewController:(id)arg1 didUpdateContentOffset:(CGPoint)arg2;
-(void)ceramicViewController:(id)arg1 didUpdateContentSize:(CGSize)arg2;
-(void)ceramicViewController:(id)arg1 didLoadSpace:(id)arg2;
-(UIEdgeInsets*)ceramicViewController:(id)arg1 insetsForBlockAtIndex:(unsigned)arg2;
-(float)ceramicViewController:(id)arg1 customFooterViewHeightForBlockAtIndex:(int)arg2;
-(void)ceramicViewController:(id)arg1 blockAtIndexWillAppear:(unsigned)arg2 inView:(id)arg3;
-(char)ceramicViewController:(id)arg1 handleItemSelectedAtIndex:(unsigned)arg2 inBlockAtIndex:(unsigned)arg3;
-(char)ceramicViewController:(id)arg1 handleFooterSelectedInBlockAtIndex:(unsigned)arg2;

@end

